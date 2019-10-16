#include "ExplorationFactory.h"
#include "Exploration.h"


Spaceship* ExplorationFactory::createSpaceship(){
    return new Exploration();
}
