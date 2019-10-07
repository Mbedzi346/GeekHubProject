#ifndef FIGHTERFACTORY_H
#define FIGHTERFACTORY_H
#include "Spaceship.h"
#include "SpaceshipFactory.h"
class SPFighterFactory: public SpaceshipFactory{
    public:
        /// @returns Fighter Transporter concrete product
        virtual Spaceship* createSpaceship() override;
};
#endif