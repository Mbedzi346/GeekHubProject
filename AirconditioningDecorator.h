//
// Created by lindo on 2019/10/27.
//

#ifndef GEEKHUBPROJECT_AIRCONDITIONINGDECORATOR_H
#define GEEKHUBPROJECT_AIRCONDITIONINGDECORATOR_H

#include "Decorator.h"
#include "Component.h"

class AirconditioningDecorator : public Decorator {
    public:
        AirconditioningDecorator(Component*);
        virtual std::string description();
        std::string addedThing();
};

#endif //GEEKHUBPROJECT_AIRCONDITIONINGDECORATOR_H
