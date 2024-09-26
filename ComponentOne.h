//
// Created by super on 3/29/2023.
//

#ifndef NEW_SFML_TUTORIAL_COMPONENTONE_H
#define NEW_SFML_TUTORIAL_COMPONENTONE_H
#include <SFML/Graphics.hpp>
#include "MouseEvents.h"

class ComponentOne : public sf::Drawable{

public:
    virtual void eventHandler(sf::RenderWindow& window, sf::Event event) = 0;
};


#endif //NEW_SFML_TUTORIAL_COMPONENTONE_H
