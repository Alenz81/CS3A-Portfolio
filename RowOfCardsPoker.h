//
// Created by super on 3/30/2023.
//

#ifndef NEW_SFML_TUTORIAL_ROWOFCARDS_H
#define NEW_SFML_TUTORIAL_ROWOFCARDS_H
#include <vector>
#include "CardHand.h"
#include "ComponentOne.h"

class RowOfCardsPoker : public ComponentOne {
private:
    int height;
    std::vector<CardPoker> cards;
    sf::Text handText;
public:
    RowOfCardsPoker();
    void addCard(CardPoker card);
    void setHeight(int num);
    bool isEmpty();

    void initializeText(const sf::Font& font, int score, int scoreAmt, int runs);
    int findGCD(int num, int denom);
    std::string numToString(int num);
    void initializeGraphics();

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
    void eventHandler(sf::RenderWindow &window, sf::Event event) override;
    void operator =(CardHand hand);



};


#endif //NEW_SFML_TUTORIAL_ROWOFCARDS_H
