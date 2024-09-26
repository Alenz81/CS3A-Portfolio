//
// Created by super on 3/29/2023.
//

#include "Card.h"

sf::Texture Card::texture;

Card::Card() {

}

Card::Card(Ranks2 rank, Suits2 suit){
    texture.loadFromFile("CardSprites.png");
    background.setTexture(texture);
    intRect.width = 2925/13;
    intRect.height = 1260/4;
    updateCard(rank, suit);
}

void Card::update() {

}

void Card::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(background);
}

void Card::eventHandler(sf::RenderWindow &window, sf::Event event) {
    if(MouseEvents::isClicked(background.getGlobalBounds(), window)){
        int r = (intRect.left/intRect.width) + 1;
        int s = (intRect.top/intRect.height) + 1;
        Ranks2 rank = static_cast<Ranks2>(r % (KING + 1));
        Suits2 suit = static_cast<Suits2>(s % (CLUBS + 1));;
        updateCard(rank, suit);
    }

}

void Card::updateCard(Ranks2 rank, Suits2 suit) {
    intRect.left = rank * intRect.width;
    intRect.top = suit * intRect.height;
    background.setTextureRect(intRect);
}

void Card::setPosition(sf::Vector2f position) {
    background.setPosition(position);
}
