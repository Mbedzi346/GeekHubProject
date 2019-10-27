//
// Created by Orifha Mbedzi on 2019-10-27.
//

#include "FullFuelState.h"

void FullFuelState::handle() {
    fuelLevel = 100;
}

void FullFuelState::changeState() {
    spaceship->setState(this);

}
