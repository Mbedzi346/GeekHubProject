#include "SPTransporterFactory.h"
#include "SpaceshipTransporter.h"
#include "Spaceship.h"

/**
 * @brief concrete factory method to create a SpaceshipTransporter Object
 * @return returns a SpaceshipTransporter Object which is a Spaceship
 * */
Spaceship* SPTransporterFactory::createSpaceship(){
    return (Spaceship*) new SpaceshipTransporter();
}
