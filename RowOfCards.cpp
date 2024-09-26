//
// Created by super on 3/30/2023.
//

#include "RowOfCards.h"

void RowOfCards::addCard(Card card) {
    card.setPosition({static_cast<float>(2925 / 13 * cards.size()), 0});
    cards.push_back(card);
}

void RowOfCards::eventHandler(sf::RenderWindow &window, sf::Event event) {
    for (int i = 0; i < cards.size(); i++){
        cards[i].eventHandler(window, event);
    }

}

void RowOfCards::update() {

}

void RowOfCards::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    for (int i = 0; i < cards.size(); i++){
        target.draw(cards.at(i));
    }
}
