//
// Created by Dave R. Smith on 2/14/23.
//

#ifndef CS3A_SPRING23_SFMLCARD_RANK_H
#define CS3A_SPRING23_SFMLCARD_RANK_H

#include <SFML/Graphics.hpp>
#include "Ranks1.h"
#include "Font.h"

class Rank : public sf::Drawable
{
private:
    sf::Text top, bottom;

public:
    Rank();
    Rank(Ranks1 rank);
    virtual void draw(sf::RenderTarget& window,
                      sf::RenderStates states) const;
};


#endif //CS3A_SPRING23_SFMLCARD_RANK_H
