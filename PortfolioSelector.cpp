//
// Created by super on 5/2/2023.
//

#include "PortfolioSelector.h"

PortfolioSelector::PortfolioSelector() : gameWalker(0), gameSelected(false){
    texture.loadFromFile("splashScreens.png");
    runnables.push_back(&greenBallRun);
    runnables.push_back(&ballRun);
    runnables.push_back(&twoDVectorRun);
    runnables.push_back(&cardRun);
    runnables.push_back(&phaserRun);
    runnables.push_back(&pokerAnalysisRun);
    runnables.push_back(&sfmlDrumHeroRun);

    window.create({1024, 720, 32}, "Portfolio");
    window.setFramerateLimit(120);

    font.loadFromFile("LATINWD.TTF");
    initializeText();

    splashScreen.setSize({500, 335});
    splashScreen.setPosition(1024/2 - splashScreen.getSize().x/2,  20 + 40 * 8);
    //splashScreen.setFillColor(sf::Color::White);

    intRect.top = 0;
    intRect.left = 0;
    intRect.height = 335;
    intRect.width = 500;

    splashScreen.setTexture(&texture);
    splashScreen.setTextureRect(intRect);




}

void PortfolioSelector::initializeText() {
    games[0].setString("Green Circle");
    games[1].setString("Bouncing Ball");
    games[2].setString("SFML 2D Array");
    games[3].setString("Playing Card");
    games[4].setString("Phaser");
    games[5].setString("Poker Analysis");
    games[6].setString("SFML Drum Hero");

    escapeText.setFont(font);
    escapeText.setFillColor(sf::Color::White);
    escapeText.setCharacterSize(20);
    escapeText.setString("Left Control + Escape to return to portfolio");
    escapeText.setPosition(window.getSize().x/2 - escapeText.getGlobalBounds().width/2, window.getSize().y - 35);


    for (int i = 0; i < 7; i++){
        games[i].setFont(font);
        games[i].setCharacterSize(40);
        games[i].setFillColor(sf::Color::White);
        games[i].setPosition(window.getSize().x/2 - games[i].getGlobalBounds().width/2, 20 + 40 * i);
    }
    games[0].setFillColor(sf::Color::Yellow);
}

void PortfolioSelector::runPortfolio() {
    sf::Clock enterBuffer;
    window.setFramerateLimit(120);
    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up) && gameWalker > 0) {
                games[gameWalker].setFillColor(sf::Color::White);
                gameWalker--;
            } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down) && gameWalker < 6) {
                games[gameWalker].setFillColor(sf::Color::White);
                gameWalker++;
            }
            intRect.left = 500 * gameWalker;
            splashScreen.setTextureRect(intRect);
            games[gameWalker].setFillColor(sf::Color::Yellow);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Enter) &&
                enterBuffer.getElapsedTime().asSeconds() > 0.01) {
                enterBuffer.restart();
                gameSelected = true;
                runnables.at(gameWalker)->setIsRun(true);
            }
        }
        window.clear();
        for (int i = 0; i < 7; i++) {
            window.draw(games[i]);
        }
        window.draw(splashScreen);
        window.draw(escapeText);

        if (gameSelected){
            if (runnables.at(gameWalker)->getIsRun()){
                runnables.at(gameWalker)->run(window);

            }
        }
        window.display();
    }
}
