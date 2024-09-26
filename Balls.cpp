//
// Created by super on 2/9/2023.
//

#include "Balls.h"

Balls::Balls() : radius(50), color(sf::Color::Blue), xSpeed(10), ySpeed(10){
    circle.setRadius(radius);
    circle.setFillColor(color);
    dimensions = {720, 420};
    circle.setPosition(dimensions.x/2 - radius, dimensions.y/2 - radius);
}

Balls::Balls(float radius, sf::Color color, int xSpeed, int ySpeed, sf::Vector2i dimensions) : radius(radius), color(color), xSpeed(xSpeed), ySpeed(ySpeed), dimensions(dimensions){
    circle.setRadius(radius);
    circle.setFillColor(color);
    circle.setPosition(dimensions.x/2 - radius, dimensions.y/2 - radius);

}

void Balls::bounce(){
    if (circle.getPosition().x <= 0 || circle.getPosition().x >= dimensions.x - radius*2){
        xSpeed = xSpeed*-1;
    }
    if (circle.getPosition().y <= 0 || circle.getPosition().y >= dimensions.y - radius*2){
        ySpeed = ySpeed*-1;
    }
    circle.move(xSpeed, ySpeed);
}

sf::CircleShape Balls::getShape(){
    return circle;
}