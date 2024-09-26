//
// Created by super on 4/6/2023.
//

#include "AnimatedSprites.h"



AnimatedSprites::AnimatedSprites() {

}

AnimatedSprites::AnimatedSprites(sf::Texture &texture, int rows, int cols) {
    setup(texture, rows, cols);
}

void AnimatedSprites::setup(sf::Texture &texture, int rows, int cols) {
    width = texture.getSize().x;
    height = texture.getSize().y;
    setTexture(texture);
    setupIntRect(texture.getSize(), rows, cols);
}

void AnimatedSprites::setupIntRect(sf::Vector2u imgSize, int rows, int cols) {
    intRect.width = std::round(imgSize.x / static_cast<float>(cols) + 1);
    intRect.height = imgSize.y / rows;
    intRect.left = 0;
    intRect.top = 0;
    setTextureRect(intRect);
}

void AnimatedSprites::eventHandler(sf::RenderWindow &window, sf::Event event) {
    sf::Vector2f velocity;
    if (sf::Keyboard::isKeyPressed(forwardKey)){
        changeDirection(FORWARD);
        velocity.x = 0;
        velocity.y = speed;
    } else if (sf::Keyboard::isKeyPressed(backKey)) {
        changeDirection(BACK);
        velocity.x = 0;
        velocity.y = -speed;
    } else if (sf::Keyboard::isKeyPressed(leftKey)) {
        changeDirection(LEFT);
        velocity.x = -speed;
        velocity.y = 0;
    } else if (sf::Keyboard::isKeyPressed(rightKey)) {
        changeDirection(RIGHT);
        velocity.x = speed;
        velocity.y = 0;
    }
    if (sf::Keyboard::isKeyPressed(forwardKey) || sf::Keyboard::isKeyPressed(backKey) || sf::Keyboard::isKeyPressed(leftKey) || sf::Keyboard::isKeyPressed(rightKey)) {
        enableState(MOVING);
    }
    move(velocity);
}

float AnimatedSprites::getSpeed() {
    return speed;
}

void AnimatedSprites::setSpeed(float speed) {
    this->speed = speed;
}

int AnimatedSprites::getTime() const {
    return time;
}

void AnimatedSprites::setTime(int time) {
    this->time = time;
}

void AnimatedSprites::animate() {
    if(clock.getElapsedTime().asMilliseconds() > time){
        setTextureRect(intRect);
        if (intRect.left >= width - intRect.width){
            intRect.left = 0;
        } else {
            intRect.left += intRect.width;
        }
        clock.restart();

    }
}

void AnimatedSprites::update() {
    if (checkState(MOVING)) {
        animate();
        disableState(MOVING);
    }

}

void AnimatedSprites::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    sf::Sprite s = (*this);
    target.draw(s);
}

void AnimatedSprites::changeDirection(directions directions) {
    intRect.top = directions * intRect.height;
}

void AnimatedSprites::setForwardKey(sf::Keyboard::Key forwardKey) {
    AnimatedSprites::forwardKey = forwardKey;
}

void AnimatedSprites::setLeftKey(sf::Keyboard::Key leftKey) {
    AnimatedSprites::leftKey = leftKey;
}

void AnimatedSprites::setRightKey(sf::Keyboard::Key rightKey) {
    AnimatedSprites::rightKey = rightKey;
}

void AnimatedSprites::setBackKey(sf::Keyboard::Key backKey) {
    AnimatedSprites::backKey = backKey;
}


