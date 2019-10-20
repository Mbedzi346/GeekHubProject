#ifndef SPACESHIPTRANSPORTER_H
#define SPACESHIPTRANSPORTER_H

#include "Spaceship.h"

class SpaceshipTransporter: public Spaceship{
public:
    virtual void Iterator* createIterator() override;
};

#endif