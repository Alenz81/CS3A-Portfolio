//
// Created by super on 5/2/2023.
//

#ifndef PORTFOLIO_TWODVECTORRUN_H
#define PORTFOLIO_TWODVECTORRUN_H
#include "Runnable.h"
#include "TwoDVector.h"

class TwoDVectorRun : public Runnable{
private:
    TwoDVector test;
    bool isRun = false;
public:

    void run(sf::RenderWindow &window) override;

    bool getIsRun() override;

    void setIsRun(bool run) override;
};


#endif //PORTFOLIO_TWODVECTORRUN_H
