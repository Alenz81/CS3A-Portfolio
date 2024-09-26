//
// Created by Dave R. Smith on 2/14/23.
//

#ifndef CS3A_SPRING23_SFMLCARD_CARD_H
#define CS3A_SPRING23_SFMLCARD_CARD_H

#include "Background.h"
#include "Rank.h"
#include "Suit.h"
#include <SFML/Graphics.hpp>

class Card1 : public sf::Drawable
{
private:
    Background background;
    Rank rank;
    Suit suit;
public:
    Card1();
    Card1(Rank rank, Suit suit);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

};


#endif //CS3A_SPRING23_SFMLCARD_CARD_H
