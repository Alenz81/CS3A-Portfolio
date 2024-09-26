//
// Created by super on 3/29/2023.
//

#include "Application.h"

sf::RenderWindow Application::window; //using this instead of inline
std::vector<Component*> Application::components;


void Application::run() {
    window.create({1024, 720, 32}, "Tutorial");
    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            for(Component* c : components){
                static_cast<EventHandlable*>(c)->eventHandler(window, event);
            }
        }

        for(Component* c : components){
            reinterpret_cast<Updatable*>(c)->update();
        }

        window.clear();
        for(Component* c : components){
            window.draw(*static_cast<sf::Drawable*>(c));
        }
        window.display();
    }

}

void Application::addComponent(Component &component) {
    components.push_back(&component);
}
