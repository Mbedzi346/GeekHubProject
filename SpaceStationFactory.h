//
// Created by Orifha Mbedzi on 2019-10-07.
//

#ifndef GEEKHUBPROJECT_SPACESTATIONFACTORY_H
#define GEEKHUBPROJECT_SPACESTATIONFACTORY_H

#include "SpaceshipFactory.h"

class SpaceStationFactory : public SpaceshipFactory{
    virtual Spaceship* createSpaceship() override;
};


#endif //GEEKHUBPROJECT_SPACESTATIONFACTORY_H
