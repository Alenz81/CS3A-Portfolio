//
// Created by super on 5/2/2023.
//

#ifndef PORTFOLIO_GREENBALLRUN_H
#define PORTFOLIO_GREENBALLRUN_H
#include "Runnable.h"

class GreenBallRun : public Runnable{
private:
    bool isRun = false;
public:
    void run(sf::RenderWindow& window) override;
    void setIsRun(bool run) override;
    bool getIsRun() override;
};


#endif //PORTFOLIO_GREENBALLRUN_H
