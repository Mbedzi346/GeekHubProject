//
// Created by Orifha Mbedzi on 2019-10-07.
//

#include "SpaceStationFactory.h"
#include "SpaceStation.h"
Spaceship* FrigatesFactory::createSpaceship(){
    return new SpaceStation();
}
