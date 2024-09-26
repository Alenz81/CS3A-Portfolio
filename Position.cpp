//
// Created by super on 2/15/2023.
//

#ifndef CARD_LAB_POSITION_CPP
#define CARD_LAB_POSITION_CPP

#include "Position.h"

template<typename T, typename S>
void Position::center(const T& constObj, S& obj){
    sf::FloatRect bounds = constObj.getGlobalBounds();
    obj.setPosition({
        bounds.left + bounds.width/2 - obj.getGlobalBounds().width/2,
        bounds.top + bounds.height/2 - obj.getGlobalBounds().height/2
    });
}

#endif //CARD_LAB_POSITION_CPP