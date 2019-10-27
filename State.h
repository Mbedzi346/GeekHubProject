//
// Created by Orifha Mbedzi on 2019-10-27.
//

#ifndef GEEKHUBPROJECT_STATE_H
#define GEEKHUBPROJECT_STATE_H


#include "Spaceship.h"
class Spaceship;
class State {

protected:
    State(Spaceship* c){spaceship = c;}
    int fuelLevel = 100;
    Spaceship* spaceship;
public:
    int getFuelLevel();
    virtual void changeState() = 0;
    virtual void handle() = 0;
};


#endif //GEEKHUBPROJECT_STATE_H
