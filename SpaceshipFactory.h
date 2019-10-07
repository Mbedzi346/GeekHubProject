#ifndef SPACESHIPFACTORY_H
#define SPACESHIPFACTORY_H
#include "SpaceshipCreator.h"
#include "Spaceship.h"
class SpaceshipFactory{
    public:
        virtual Spaceship* createSpaceship() = 0;
};
#endif