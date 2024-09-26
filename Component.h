//
// Created by super on 3/29/2023.
//

#ifndef NEW_SFML_TUTORIAL_COMPONENT_H
#define NEW_SFML_TUTORIAL_COMPONENT_H
#include <SFML/Graphics.hpp>
#include "MouseEvents.h"
#include "Updatable.h"
#include "EventHandlable.h"
#include "States.h"

class Component : public Updatable, public sf::Drawable, public EventHandlable, public States{

};

#endif //NEW_SFML_TUTORIAL_COMPONENT_H
