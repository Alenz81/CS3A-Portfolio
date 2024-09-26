//
// Created by Dave R. Smith on 2/14/23.
//

#include "Images1.h"

std::vector<sf::Texture> Images1::images(LAST_SUIT, sf::Texture());

std::string Images1::getPath(Suits1 suit)
{
    switch(suit)
    {
        case HEARTS: return "suits/heart.png";
        case DIAMONDS: return "suits/diamonds.png";
        case SPADES: return "suits/spades.png";
        case CLUBS: return "suits/club.png";
    }
}

void Images1::loadFile(Suits1 suit)
{
    images[suit].loadFromFile(getPath(suit));
}

sf::Texture& Images1::getImage(Suits1 suit)
{
    loadFile(suit);
    return images[suit];
}