#ifndef FIGHTERFACTORY_H
#define FIGHTERFACTORY_H
#include "Spaceship.h"
#include "SpaceshipFactory.h"

// renamed from FighterFactory to SPFighterFactory
class SPFighterFactory: public SpaceshipFactory{
    public:
        /// @returns Fighter Transporter concrete product
        virtual Spaceship* createSpaceship();  
};
#endif