//
// Created by Orifha Mbedzi on 2019-10-27.
//

#ifndef GEEKHUBPROJECT_EMPTYFUELSTATE_H
#define GEEKHUBPROJECT_EMPTYFUELSTATE_H


#include "State.h"

class EmptyFuelState : public State{
public:
    EmptyFuelState(Spaceship* c) : State(c){fuelLevel = 0;};
    void handle() override ;
    virtual void changeState() override;

};


#endif //GEEKHUBPROJECT_EMPTYFUELSTATE_H
