//
// Created by Orifha Mbedzi on 2019-10-27.
//

#include "Memento.h"

State *Memento::getState() {
    return state;
}

void Memento::setState(State *s) {
    state = s;
}
