//
// Created by Orifha Mbedzi on 2019-09-28.
//

#include "SPTransporterFactory.h"
#include "SpaceshipTransporter.h"

Spaceship* SPTransporterFactory::createSpaceship(){
    return new SpaceshipTransporter();
}