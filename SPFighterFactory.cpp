//
// Created by Orifha Mbedzi on 2019-09-28.
//

#include "SPFighterFactory.h"
#include "FighterTransporter.h"

Spaceship* FighterTransporter::createSpaceship(){
    return new FighterTransporter();
}