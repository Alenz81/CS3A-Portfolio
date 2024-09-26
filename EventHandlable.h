//
// Created by super on 4/6/2023.
//

#ifndef NEW_SFML_TUTORIAL_EVENTHANDLABLE_H
#define NEW_SFML_TUTORIAL_EVENTHANDLABLE_H
#include <SFML/Graphics.hpp>

class EventHandlable {
public:
    virtual void eventHandler(sf::RenderWindow &window, sf::Event event) = 0;
};
#endif //NEW_SFML_TUTORIAL_EVENTHANDLABLE_H
