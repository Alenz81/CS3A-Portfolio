//
// Created by Dave R. Smith on 2/14/23.
//

#ifndef CS3A_SPRING23_SFMLCARD_SUIT_H
#define CS3A_SPRING23_SFMLCARD_SUIT_H
#include <SFML/Graphics.hpp>
#include "Suits1.h"
#include "Images1.h"
class Suit : public sf::Sprite
{


public:
    Suit();
    Suit(Suits1 suit);
};


#endif //CS3A_SPRING23_SFMLCARD_SUIT_H
