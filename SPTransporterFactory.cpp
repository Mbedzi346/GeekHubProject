

#include "SPTransporterFactory.h"
#include "SpaceshipTransporter.h"

Spaceship* SPTransporterFactory::createSpaceship(){

#include "Spaceship.h"
#include "SPTransporterFactory.h"
#include "SpaceshipTransporter.h"

Spaceship* SpaceshipTransporter::createSpaceship(){

    return new SpaceshipTransporter();
}
