//
// Created by lindo on 2019/10/27.
//

#ifndef GEEKHUBPROJECT_DECORATOR_H
#define GEEKHUBPROJECT_DECORATOR_H

#include "Component.h"
class Decorator : public Component {
    private:
        Component* component;
    public:
        Decorator(Component*);
        virtual std::string description();
};
#endif //GEEKHUBPROJECT_DECORATOR_H
