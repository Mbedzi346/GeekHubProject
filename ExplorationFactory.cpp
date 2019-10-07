//
// Created by Orifha Mbedzi on 2019-09-28.
//
#include "Spaceship.h"
#include "ExplorationFactory.h"
#include "Exploration.h"

<<<<<<< HEAD
#include "ExplorationFactory.h"
#include "Exploration.h"

=======
>>>>>>> 9512fbcb438c39bf8c8414a8e8a573b7b8b7f60c
Spaceship* ExplorationFactory::createSpaceship(){
    return new Exploration();
}