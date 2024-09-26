//
// Created by super on 5/2/2023.
//

#ifndef PORTFOLIO_BALLRUN_H
#define PORTFOLIO_BALLRUN_H
#include "Runnable.h"
#include "Balls.h"

class BallRun : public Runnable{
private:
    bool isRun = false;
public:
    void run(sf::RenderWindow& window) override;

    bool getIsRun() override;

    void setIsRun(bool run) override;
};


#endif //PORTFOLIO_BALLRUN_H
