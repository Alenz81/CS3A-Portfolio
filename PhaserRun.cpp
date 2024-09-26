//
// Created by super on 5/2/2023.
//

#include "PhaserRun.h"

PhaserRun::PhaserRun() {
    phaser.setup(Images::getImage(PHASER), 4, 12);
    phaser.setTime(80);
    phaser.setSpeed(20);
    components.push_back(&phaser);
}

void PhaserRun::run(sf::RenderWindow &window) {
    window.setTitle("Phaser");
    while(window.isOpen() && isRun){
        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            for(Component* c : components){
                static_cast<EventHandlable*>(c)->eventHandler(window, event);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape) && sf::Keyboard::isKeyPressed(sf::Keyboard::Key::LControl)){
                isRun = false;
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
    window.setTitle("Portfolio");
}

bool PhaserRun::getIsRun() {
    return isRun;
}

void PhaserRun::setIsRun(bool run) {
    isRun = run;
}
