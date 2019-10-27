//
// Created by lindo on 2019/10/27.
//

#ifndef GEEKHUBPROJECT_PREMIUMSOFTWAREDECORATOR_H
#define GEEKHUBPROJECT_PREMIUMSOFTWAREDECORATOR_H

#include "Decorator.h"
#include "Component.h"

class PremiumSoftwareDecorator : public Decorator {
    public:
        PremiumSoftwareDecorator(Component*);
        virtual std::string description();
        std::string addedThing();
};

#endif //GEEKHUBPROJECT_PREMIUMSOFTWAREDECORATOR_H
