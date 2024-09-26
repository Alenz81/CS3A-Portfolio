//
// Created by super on 2/9/2023.
//

#ifndef BOUNCING_BALL_BALLS_H
#define BOUNCING_BALL_BALLS_H
#include <SFML/Graphics.hpp>

class Balls {
public:
    Balls();
    Balls(float radius, sf::Color color, int xSpeed, int ySpeed, sf::Vector2i dimensions);
    void bounce();
    sf::CircleShape getShape();
private:
    sf::CircleShape circle;
    int xSpeed, ySpeed;
    float radius;
    sf::Color color;
    sf::Vector2i dimensions;
};


#endif //BOUNCING_BALL_BALLS_H
