#ifndef SPTRANSPORTERFACTORY_H
#define SPTRANSPORTERFACTORY_H
#include "Spaceship.h"
#include "SpaceshipFactory.h"
class SPTransporterFactory: public SpaceshipFactory{
    public:
        /// @returns Spaceship Transporter concrete product
        virtual Spaceship* createSpaceship(); 
};
#endif