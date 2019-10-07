#include "Spaceship.h"
#include "SPFighterFactory.h"
#include "FighterTransporter.h"

Spaceship* FighterTransporter::createSpaceship(){
    return new FighterTransporter();
}