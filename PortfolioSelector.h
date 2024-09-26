//
// Created by super on 5/2/2023.
//

#ifndef PORTFOLIO_PORTFOLIOSELECTOR_H
#define PORTFOLIO_PORTFOLIOSELECTOR_H
#include <SFML/Graphics.hpp>
#include <vector>
#include "Runnable.h"
#include "GreenBallRun.h"
#include "BallRun.h"
#include "TwoDVectorRun.h"
#include "CardRun.h"
#include "PhaserRun.h"
#include "PokerAnalysisRun.h"
#include "SFMLDrumHeroRun.h"
#include <iostream>

class PortfolioSelector {
private:
    GreenBallRun greenBallRun;
    BallRun ballRun;
    TwoDVectorRun twoDVectorRun;
    CardRun cardRun;
    PhaserRun phaserRun;
    PokerAnalysisRun pokerAnalysisRun;
    SFMLDrumHeroRun sfmlDrumHeroRun;
    sf::RectangleShape splashScreen;
    sf::IntRect intRect;
    sf::Texture texture;

    sf::RenderWindow window;
    std::vector<Runnable*> runnables;
    sf::Font font;
    sf::Text games[7];
    sf::Text escapeText;
    int gameWalker;
    void initializeText();
    bool gameSelected;
public:
    PortfolioSelector();
    void runPortfolio();
};


#endif //PORTFOLIO_PORTFOLIOSELECTOR_H
