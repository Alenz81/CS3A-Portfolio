//
// Created by super on 3/29/2023.
//

#ifndef NEW_SFML_TUTORIAL_CARD_H
#define NEW_SFML_TUTORIAL_CARD_H
#include "Component.h"
#include "Ranks2.h"
#include "Suits2.h"
#include "EventHandlable.h"
#include "Updatable.h"

class Card : public Component{
protected:
    sf::Sprite background;
    sf::IntRect intRect;
    static sf::Texture texture;
    void updateCard(Ranks2 rank, Suits2 suit);
public:
    Card();
    Card(Ranks2 rank, Suits2 suit);
    void eventHandler(sf::RenderWindow &window, sf::Event event) override;
    void setPosition(sf::Vector2f position);
    void update() override;

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //NEW_SFML_TUTORIAL_CARD_H
