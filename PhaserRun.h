//
// Created by super on 5/2/2023.
//

#ifndef PORTFOLIO_PHASERRUN_H
#define PORTFOLIO_PHASERRUN_H
#include "Runnable.h"
#include "Component.h"
#include "AnimatedSprites.h"
#include "Images.h"

class PhaserRun : public Runnable{
private:
    AnimatedSprites phaser;
    bool isRun = false;
    std::vector<Component*> components;
public:
    PhaserRun();
    void run(sf::RenderWindow &window) override;

    bool getIsRun() override;

    void setIsRun(bool run) override;
};


#endif //PORTFOLIO_PHASERRUN_H
