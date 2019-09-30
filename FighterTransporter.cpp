#include "Spaceship.h"
#include "FighterFactory.h"
#include "FighterTransporter.h"

Spaceship* FighterTransporter::createSpaceship(){
    return new FighterTransporter();
}