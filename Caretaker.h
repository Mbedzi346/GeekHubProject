//
// Created by Orifha Mbedzi on 2019-10-27.
//

#ifndef GEEKHUBPROJECT_CARETAKER_H
#define GEEKHUBPROJECT_CARETAKER_H


#include "Memento.h"

class Caretaker {
private:
    Memento* memento;
public:
    Memento* getMemento();

};


#endif //GEEKHUBPROJECT_CARETAKER_H
