//
// Created by Dave R. Smith on 2/14/23.
//

#include "Suit.h"
Suit::Suit(){}
Suit::Suit(Suits1 suit)
{
    setTexture(Images1::getImage(suit));
}