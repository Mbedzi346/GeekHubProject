//
// Created by lindo on 2019/10/27.
//

#ifndef GEEKHUBPROJECT_BRIDGE_H
#define GEEKHUBPROJECT_BRIDGE_H

#include "Component.h"

class Bridge : public Component {
    public:
        Bridge();
        virtual std::string description();
        ~Bridge();
};
#endif //GEEKHUBPROJECT_BRIDGE_H
