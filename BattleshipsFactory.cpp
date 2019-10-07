//
// Created by Orifha Mbedzi on 2019-09-28.
//

<<<<<<< HEAD

#include "BattleshipsFactory.h"
#include "Battleship.h"

 Spaceship* BattleshipsFactory::createSpaceship(){
     return new Battleship();
}

=======
#include "Spaceship.h"
#include "BattleshipsFactory.h"
#include "Battleship.h"

Spaceship* Battleship::createSpaceship(){
    return new Battleship();
}
>>>>>>> 9512fbcb438c39bf8c8414a8e8a573b7b8b7f60c
