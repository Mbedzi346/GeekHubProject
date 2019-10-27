//
// Created by lindo on 2019/10/27.
//

#include "Decorator.h"

Decorator::Decorator(Component* com) {
    this->component = com;
}

std::string Decorator::description() {
    return component->description();
}