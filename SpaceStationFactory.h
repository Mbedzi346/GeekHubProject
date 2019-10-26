#ifndef GEEKHUBPROJECT_SPACESTATIONFACTORY_H
#define GEEKHUBPROJECT_SPACESTATIONFACTORY_H

#include "SpaceshipFactory.h"

class SpaceStationFactory : public SpaceshipFactory{
    public:
        virtual Spaceship* createSpaceship() override;
};


#endif //GEEKHUBPROJECT_SPACESTATIONFACTORY_H
