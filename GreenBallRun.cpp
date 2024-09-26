//
// Created by super on 5/2/2023.
//

#include "GreenBallRun.h"

void GreenBallRun::run(sf::RenderWindow& window) {
    sf::CircleShape circle;
    circle.setFillColor(sf::Color::Green);
    circle.setRadius(250.f);
    window.setTitle("Green Circle");
    while(window.isOpen() && isRun)
    {
        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape) && sf::Keyboard::isKeyPressed(sf::Keyboard::Key::LControl)){
                isRun = false;
            }
        }
        window.clear(sf::Color::Black);
        window.draw(circle);
        window.display();
    }
    window.setTitle("Portfolio");
}

void GreenBallRun::setIsRun(bool run) {
    isRun = run;
}

bool GreenBallRun::getIsRun() {
    return isRun;
}
