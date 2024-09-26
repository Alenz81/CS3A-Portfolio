//
// Created by super on 4/11/2023.
//

#ifndef NEW_SFML_TUTORIAL_STATES_H
#define NEW_SFML_TUTORIAL_STATES_H
#include <map>

enum states {
    MOVING, LAST_STATE
};

class States {
private:
    std::map<states, bool> stateMap;
public:
    States();
    void enableState(states state);
    void disableState(states state);
    bool checkState(states state);
    void toggleState(states state);

};


#endif //NEW_SFML_TUTORIAL_STATES_H
