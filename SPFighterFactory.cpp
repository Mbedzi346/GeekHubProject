//
// Created by Orifha Mbedzi on 2019-09-28.
//
#include "Spaceship.h"
#include "SPFighterFactory.h"
#include "FighterTransporter.h"

// renamed from FighterFactory to SPFighterFactory
Spaceship* SPFighterFactory::createSpaceship(){
    return new FighterTransporter();   
}