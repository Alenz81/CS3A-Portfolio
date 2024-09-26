//
// Created by super on 2/15/2023.
//

#ifndef CARD_LAB_POSITION_H
#define CARD_LAB_POSITION_H

#include <SFML/Graphics.hpp>


class Position {
public:
    template<typename T, typename S>
    static void center(const T& constObj, S& obj);
private:
};

#include "Position.cpp"
#endif //CARD_LAB_POSITION_H
