//
// Created by Orifha Mbedzi on 2019-10-27.
//

#ifndef GEEKHUBPROJECT_MEDIATOR_H
#define GEEKHUBPROJECT_MEDIATOR_H


#include "CrewMember.h"

class CrewMember;
class Mediator {
public:
    virtual void notify(CrewMember*) =0;
    virtual void addColleague(CrewMember*) = 0;
};


#endif //GEEKHUBPROJECT_MEDIATOR_H
