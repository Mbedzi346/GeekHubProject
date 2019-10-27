//
// Created by lindo on 2019/10/27.
//

#ifndef GEEKHUBPROJECT_TVDECORATOR_H
#define GEEKHUBPROJECT_TVDECORATOR_H

#include "Decorator.h"
#include "Component.h"

class TVDecorator : public Decorator {

public:
    TVDecorator(Component*);
    std::string description();
    std::string addedThing();
};

#endif //GEEKHUBPROJECT_TVDECORATOR_H
