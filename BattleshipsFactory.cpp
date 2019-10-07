//
// Created by Orifha Mbedzi on 2019-09-28.
//


#include "BattleshipsFactory.h"
#include "Battleship.h"

 Spaceship* BattleshipsFactory::createSpaceship(){
     return new Battleship();
}

