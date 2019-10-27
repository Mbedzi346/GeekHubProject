//
// Created by Orifha Mbedzi on 2019-10-27.
//

#include "MidFuelState.h"
#include "FullFuelState.h"
void MidFuelState::handle() {
    fuelLevel = 100;
    changeState();

}

void MidFuelState::changeState() {
    spaceship->setState(new FullFuelState(spaceship));
}
