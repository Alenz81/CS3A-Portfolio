//
// Created by super on 4/6/2023.
//

#ifndef NEW_SFML_TUTORIAL_ANIMATEDSPRITES_H
#define NEW_SFML_TUTORIAL_ANIMATEDSPRITES_H
#include <SFML/Graphics.hpp>
#include "Component.h"
#include "EventHandlable.h"
#include "Updatable.h"
#include <cmath>
#include <iostream>

enum directions {
    FORWARD, LEFT, RIGHT, BACK
};

class AnimatedSprites : public Component, public sf::Sprite {//, public Updatable {
private:
    sf::Clock clock;
    sf::IntRect intRect;
    int time = 250;
    float speed;
    unsigned int width, height;
    void setupIntRect(sf::Vector2u imgSize, int rows, int cols);
    sf::Keyboard::Key forwardKey = sf::Keyboard::Down, leftKey = sf::Keyboard::Left, rightKey = sf::Keyboard::Right, backKey = sf::Keyboard::Up;

public:
    AnimatedSprites();
    AnimatedSprites(sf::Texture &texture, int rows, int cols);
    void setup(sf::Texture &texture, int rows, int cols);

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
    void eventHandler(sf::RenderWindow &window, sf::Event event) override;


    float getSpeed();
    void setSpeed(float speed);
    int getTime() const;
    void setTime(int time);
    void setForwardKey(sf::Keyboard::Key forwardKey);
    void setLeftKey(sf::Keyboard::Key leftKey);
    void setRightKey(sf::Keyboard::Key rightKey);
    void setBackKey(sf::Keyboard::Key backKey);
    void animate();
    void update() override;
    void changeDirection(directions directions);

};


#endif //NEW_SFML_TUTORIAL_ANIMATEDSPRITES_H
