//
// Created by Orifha Mbedzi on 2019-09-28.
//

<<<<<<< HEAD
#include "FrigatesFactory.h"
#include "Frigates.h"

Spaceship* FrigatesFactory::createSpaceship(){
=======
#include "Spaceship.h"
#include "FrigatesFactory.h"
#include "Frigates.h"

Spaceship* Frigates::createSpaceship(){
>>>>>>> 9512fbcb438c39bf8c8414a8e8a573b7b8b7f60c
    return new Frigates();
}