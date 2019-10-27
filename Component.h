//
// Created by lindo on 2019/10/27.
//

#ifndef GEEKHUBPROJECT_COMPONENT_H
#define GEEKHUBPROJECT_COMPONENT_H

#include <string>
class Component {

    public:
        Component() {};
        virtual std::string description() = 0;
        virtual ~Component() {};
};
#endif //GEEKHUBPROJECT_COMPONENT_H
