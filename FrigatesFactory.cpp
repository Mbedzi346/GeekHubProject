//
// Created by Orifha Mbedzi on 2019-09-28.
//

#include "Spaceship.h"
#include "FrigatesFactory.h"
#include "Frigates.h"

Spaceship* Frigates::createSpaceship(){
    return new Frigates();
}