//
// Created by Orifha Mbedzi on 2019-09-28.
//

#include "FrigatesFactory.h"
#include "Frigates.h"

Spaceship* FrigatesFactory::createSpaceship(){
    return new Frigates();
}