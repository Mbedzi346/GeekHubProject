//
// Created by Orifha Mbedzi on 2019-09-28.
//

<<<<<<< HEAD
#include "SPTransporterFactory.h"
#include "SpaceshipTransporter.h"

Spaceship* SPTransporterFactory::createSpaceship(){
=======
#include "Spaceship.h"
#include "SPTransporterFactory.h"
#include "SpaceshipTransporter.h"

Spaceship* SpaceshipTransporter::createSpaceship(){
>>>>>>> 9512fbcb438c39bf8c8414a8e8a573b7b8b7f60c
    return new SpaceshipTransporter();
}