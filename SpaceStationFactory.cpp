
#include "SpaceStationFactory.h"
#include "SpaceStation.h"
#include "Spaceship.h"

/**
 * @brief concrete factory method to create a SpaceStation Object
 * @return returns a SpaceStation Object which is a Spaceship
 * */
Spaceship* SpaceStationFactory::createSpaceship(){
    return (Spaceship*) new SpaceStation();
}
