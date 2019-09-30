//
// Created by Orifha Mbedzi on 2019-09-28.
//

#include "Spaceship.h"
#include "SPTransporterFactory.h"
#include "SpaceshipTransporter.h"

Spaceship* SpaceshipTransporter::createSpaceship(){
    return new SpaceshipTransporter();
}