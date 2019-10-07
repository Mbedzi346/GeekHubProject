#ifndef FRIGATESFACTORY_H
#define FRIGATESFACTORY_H
#include "Spaceship.h"
#include "SpaceshipFactory.h"
class FrigratesFactory: public SpaceshipFactory{
    public:
        /// @returns Frigates concrete product
        virtual Spaceship* createSpaceship() override;
};
#endif