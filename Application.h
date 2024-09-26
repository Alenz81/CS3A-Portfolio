//
// Created by super on 3/29/2023.
//

#ifndef NEW_SFML_TUTORIAL_APPLICATION_H
#define NEW_SFML_TUTORIAL_APPLICATION_H
#include <SFML/Graphics.hpp>
#include <vector>
#include "Component.h"
#include "EventHandlable.h"
#include "Updatable.h"



class Application {
private:
    static sf::RenderWindow window;
    static std::vector<Component*> components;
public:
    static void run();
    static void addComponent(Component& component);

};


#endif //NEW_SFML_TUTORIAL_APPLICATION_H
