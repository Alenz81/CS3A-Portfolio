//
// Created by super on 5/2/2023.
//

#include "TwoDVectorRun.h"

void TwoDVectorRun::run(sf::RenderWindow &window) {
    window.setTitle("2D SFML Array");
    while(window.isOpen() && isRun){
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(sf::Event::Closed == event.type)
                window.close();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape) && sf::Keyboard::isKeyPressed(sf::Keyboard::Key::LControl)){
                isRun = false;
            }

            test.eventHandler(window, event);
        }
        window.clear();
        test.changeColors();
        window.draw(test);
        window.display();
    }
    window.setTitle("Portfolio");
}

bool TwoDVectorRun::getIsRun() {
    return isRun;
}

void TwoDVectorRun::setIsRun(bool run) {
    isRun = run;
}
