//
// Created by Orifha Mbedzi on 2019-10-27.
//

#include "EmptyFuelState.h"
#include "MidFuelState.h"

void EmptyFuelState::handle() {
    fuelLevel = 50;
    changeState();

}

void EmptyFuelState::changeState() {
    spaceship->setState(new MidFuelState(spaceship));
}
