//
// Created by super on 4/11/2023.
//

#include "States.h"

States::States() {
    for (int i = 0; i < LAST_STATE; i++){
        stateMap[(states)i] = false;
    }
}

void States::enableState(states state) {
    stateMap[state] = true;
}

void States::disableState(states state) {
    stateMap[state] = false;
}

bool States::checkState(states state) {
    return stateMap[state];
}

void States::toggleState(states state) {
    if (stateMap[state]){
        stateMap[state] = false;
    } else {
        stateMap[state] = true;
    }
}
