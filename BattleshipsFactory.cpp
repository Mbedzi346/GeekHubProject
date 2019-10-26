#include "Spaceship.h"
#include "BattleshipsFactory.h"
#include "Battleship.h"

Spaceship* BattleshipsFactory::createSpaceship(){
    return new Battleship();
}
