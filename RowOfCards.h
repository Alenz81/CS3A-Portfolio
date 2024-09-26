//
// Created by super on 3/30/2023.
//

#ifndef NEW_SFML_TUTORIAL_ROWOFCARDS_H
#define NEW_SFML_TUTORIAL_ROWOFCARDS_H
#include <vector>
#include "Card.h"
#include "EventHandlable.h"
#include "Updatable.h"

class RowOfCards : public Component {
private:
    std::vector<Card> cards;
public:
    void addCard(Card card);

    void update() override;
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
    void eventHandler(sf::RenderWindow &window, sf::Event event) override;


};


#endif //NEW_SFML_TUTORIAL_ROWOFCARDS_H
