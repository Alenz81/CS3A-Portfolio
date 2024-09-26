//
// Created by super on 5/2/2023.
//

#include "PokerAnalysisRun.h"

PokerAnalysisRun::PokerAnalysisRun() : isRun(false){

}

void PokerAnalysisRun::run(sf::RenderWindow &window) {
    drawTest.runAnalysis();
    drawTest.setIsRun(isRun);
    drawTest.drawAnalysis(window);
    window.create({1024, 720, 32}, "Portfolio");
    isRun = drawTest.isRun1();
}

bool PokerAnalysisRun::getIsRun() {
    return isRun;
}

void PokerAnalysisRun::setIsRun(bool run) {
    isRun = run;
}
