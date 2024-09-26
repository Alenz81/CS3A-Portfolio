//
// Created by super on 5/2/2023.
//

#ifndef PORTFOLIO_RUNNABLE_H
#define PORTFOLIO_RUNNABLE_H
#include <SFML/Graphics.hpp>

class Runnable {
public:
    virtual void run(sf::RenderWindow& window) = 0;
    virtual bool getIsRun() = 0;
    virtual void setIsRun(bool run) = 0;
};


#endif //PORTFOLIO_RUNNABLE_H
