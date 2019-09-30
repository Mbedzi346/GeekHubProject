//
// Created by Orifha Mbedzi on 2019-09-28.
//
#include "Spaceship.h"
#include "ExplorationFactory.h"
#include "Exploration.h"

Spaceship* ExplorationFactory::createSpaceship(){
    return new Exploration();
}