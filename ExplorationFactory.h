#ifndef EXPLORATIONFACTORY_H
#define EXPLORATIONFACTORY_H
#include "Spaceship.h"
#include "SpaceshipFactory.h"
class ExplorationFactory: public SpaceshipFactory{
    public:
        /// @returns Exploration vessels concrete product
        virtual Spaceship* createSpaceship(); 
};
#endif