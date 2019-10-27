//
// Created by Orifha Mbedzi on 2019-10-27.
//

#ifndef GEEKHUBPROJECT_MIDFUELSTATE_H
#define GEEKHUBPROJECT_MIDFUELSTATE_H


#include "State.h"

class MidFuelState : public State{
public:
    MidFuelState(Spaceship* c) : State(c){fuelLevel = 50;};
    void handle() override ;
    virtual void changeState() override ;

};


#endif //GEEKHUBPROJECT_MIDFUELSTATE_H
