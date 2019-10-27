//
// Created by Orifha Mbedzi on 2019-10-27.
//

#ifndef GEEKHUBPROJECT_FULLFUELSTATE_H
#define GEEKHUBPROJECT_FULLFUELSTATE_H


#include "State.h"

class FullFuelState : public State{
public:
    FullFuelState(Spaceship* c) : State(c){fuelLevel = 100;};
    void handle() override ;
    virtual void changeState() override ;

};


#endif //GEEKHUBPROJECT_FULLFUELSTATE_H
