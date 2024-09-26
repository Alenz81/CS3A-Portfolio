//
// Created by super on 3/28/2023.
//

#ifndef POKER_ANALYSIS_POKERANALYSIS_H
#define POKER_ANALYSIS_POKERANALYSIS_H
#include "CardHandScorer.h"
#include "RowOfCardsPoker.h"

class PokerAnalysis {
private:
    RowOfCardsPoker uniqueHands[10];
    int listOfScores[10] = {0};
    int runs;
    bool isRun = false;
public:
    PokerAnalysis();
    bool isNotFull();
    void runAnalysis();
    CardHand deckAndHand();
    void drawAnalysis(sf::RenderWindow &window);
    bool isRun1() const;
    void setIsRun(bool isRun);





    friend std::ostream& operator<<(std::ostream& out, PokerAnalysis pokerAnalysis);
};


#endif //POKER_ANALYSIS_POKERANALYSIS_H
