#ifndef BATTLESHIPSFACTORY_H
#define BATTLESHIPSFACTORY_H
#include "Spaceship.h"
#include "SpaceshipFactory.h"
class BattleshipsFactory: public SpaceshipFactory{
    public:
        /// @returns Battleship concrete product
        virtual Spaceship* createSpaceship(); 
};
#endif