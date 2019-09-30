//
// Created by Orifha Mbedzi on 2019-09-28.
//

#include "Spaceship.h"
#include "BattleshipsFactory.h"
#include "Battleship.h"

Spaceship* Battleship::createSpaceship(){
    return new Battleship();
}