//
// Created by super on 5/2/2023.
//

#include "BallRun.h"

void BallRun::run(sf::RenderWindow& window) {
    int x = window.getSize().x;
    int y = window.getSize().y;
    Balls ball(60, sf::Color::Cyan, -17, -15, {x, y});
    Balls otherBall;
    Balls anotherBall(32, sf::Color::Green, 2, -26, {x, y});
    Balls balls(4, sf::Color::Red, 44, -60, {x, y});
    Balls anotherBalls(6, sf::Color::Magenta, -11, -100, {x, y});
    window.setTitle("Bouncing Balls");
    while (window.isOpen() && isRun) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape) &&
               sf::Keyboard::isKeyPressed(sf::Keyboard::Key::LControl)) {
                isRun = false;
            }
        }
        ball.bounce();
        otherBall.bounce();
        anotherBall.bounce();
        balls.bounce();
        anotherBalls.bounce();

        window.clear();
        window.draw(ball.getShape());
        window.draw(otherBall.getShape());
        window.draw(anotherBall.getShape());
        window.draw(balls.getShape());
        window.draw(anotherBalls.getShape());
        window.display();
    }
    window.setTitle("Portfolio");
}

bool BallRun::getIsRun() {
    return isRun;
}

void BallRun::setIsRun(bool run) {
    isRun = run;
}
