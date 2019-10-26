
#include "FrigatesFactory.h"
#include "Frigates.h"
#include "Spaceship.h"


Spaceship* FrigatesFactory::createSpaceship(){
    return new Frigates();
}

