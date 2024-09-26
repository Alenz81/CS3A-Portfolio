//
// Created by super on 5/3/2023.
//

#ifndef PORTFOLIO_SFMLDRUMHERORUN_H
#define PORTFOLIO_SFMLDRUMHERORUN_H
#include "Runnable.h"
#include <vector>
#include "ComponentDrums.h"
#include "EventHandable.h"
#include "UpdatableDrums.h"
#include "Note.h"
#include "Menu.h"
#include "DifficultySelector.h"
#include "HighWay.h"
#include "PauseMenu.h"

class SFMLDrumHeroRun : public Runnable {
private:
    Engine engine;
    bool isRun;
    bool partOfGame[6];
    sf::RenderWindow window;
    std::vector<ComponentDrums*> components;
    Menu menu;
    DifficultySelector difficultySelector, songEndMenu;
    HighWay highWay;
    PauseMenu pauseMenu;
    SongAudio songAudio;
    sf::Clock songClock;
    double songLength;
public:
    SFMLDrumHeroRun();

    void addComponent(ComponentDrums& component);

    void run(sf::RenderWindow &window) override;

    bool getIsRun() override;

    void setIsRun(bool run) override;
};


#endif //PORTFOLIO_SFMLDRUMHERORUN_H
