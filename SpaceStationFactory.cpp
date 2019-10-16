
#include "SpaceStationFactory.h"
#include "SpaceStation.h"
Spaceship* FrigatesFactory::createSpaceship(){
    return new SpaceStation();
}
