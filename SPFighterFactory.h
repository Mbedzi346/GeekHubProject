#ifndef FIGHTERFACTORY_H
#define FIGHTERFACTORY_H
#include "Spaceship.h"
#include "SpaceshipFactory.h"
<<<<<<< HEAD:SPFighterFactory.h
class SPFighterFactory: public SpaceshipFactory{
    public:
        /// @returns Fighter Transporter concrete product
        virtual Spaceship* createSpaceship() override;
=======

// renamed from FighterFactory to SPFighterFactory
class SPFighterFactory: public SpaceshipFactory{
    public:
        /// @returns Fighter Transporter concrete product
        virtual Spaceship* createSpaceship();  
>>>>>>> 7d75c44be87abfc3733cbd61ac921def9e847f0e:SPFighterFactory.h
};
#endif