//
// Created by super on 5/2/2023.
//

#ifndef PORTFOLIO_POKERANALYSISRUN_H
#define PORTFOLIO_POKERANALYSISRUN_H
#include "Runnable.h"
#include "PokerAnalysis.h"

class PokerAnalysisRun : public Runnable {
private:
    bool isRun;
    PokerAnalysis drawTest;
public:
    PokerAnalysisRun();
    void run(sf::RenderWindow &window) override;

    bool getIsRun() override;

    void setIsRun(bool run) override;
};


#endif //PORTFOLIO_POKERANALYSISRUN_H
