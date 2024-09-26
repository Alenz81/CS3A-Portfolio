//
// Created by super on 5/2/2023.
//

#ifndef PORTFOLIO_CARDRUN_H
#define PORTFOLIO_CARDRUN_H
#include "Runnable.h"
#include "Card1.h"
#include "Position.h"


class CardRun : public Runnable{
private:
    bool isRun = false;
public:
    void run(sf::RenderWindow &window) override;

    bool getIsRun() override;

    void setIsRun(bool run) override;
};


#endif //PORTFOLIO_CARDRUN_H
