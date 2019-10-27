//
// Created by Orifha Mbedzi on 2019-10-27.
//

#ifndef GEEKHUBPROJECT_MEMENTO_H
#define GEEKHUBPROJECT_MEMENTO_H


#include "State.h"

class State;

class Memento {
private:
    State* state;
public:
    State* getState();
    void setState(State*);


};


#endif //GEEKHUBPROJECT_MEMENTO_H
