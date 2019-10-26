#ifndef SPACESHIPTRANSPORTER_H
#define SPACESHIPTRANSPORTER_H

#include "Spaceship.h"
#include "Iterator.h"

class SpaceshipTransporter: public Spaceship{
    public:
        virtual Iterator* createIterator() override;
};

#endif