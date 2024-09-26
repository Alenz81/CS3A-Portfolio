//
// Created by super on 5/2/2023.
//

#include "CardRun.h"

void CardRun::run(sf::RenderWindow &window) {
    Card1 c(ACE, HEARTS);

    sf::CircleShape circle(80);
    sf::RectangleShape rect({200, 100});
    rect.setFillColor(sf::Color::Blue);
    rect.setPosition(200, 100);
    circle.setPosition(300,  200);

    Position::center(circle, rect);

    while(window.isOpen() && isRun){
        sf::Event event;
        while(window.pollEvent(event)){
            if (sf::Event::Closed == event.type){
                window.close();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape) && sf::Keyboard::isKeyPressed(sf::Keyboard::Key::LControl)){
                isRun = false;
            }
        }
        window.clear();
        window.draw(circle);
        window.draw(rect);
        window.display();
    }
}

bool CardRun::getIsRun() {
    return isRun;
}

void CardRun::setIsRun(bool run) {
    isRun = run;
}
