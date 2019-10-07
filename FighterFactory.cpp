//
// Created by Orifha Mbedzi on 2019-09-28.
//
#include "Spaceship.h"
#include "FighterFactory.h"
#include "FighterTransporter.h"

Spaceship* FighterFactory::createSpaceship(){
    return new FighterTransporter();
}