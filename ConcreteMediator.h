//
// Created by Orifha Mbedzi on 2019-10-27.
//

#ifndef GEEKHUBPROJECT_CONCRETEMEDIATOR_H
#define GEEKHUBPROJECT_CONCRETEMEDIATOR_H


#include "Mediator.h"
#include <vector>
using namespace std;

class ConcreteMediator : public Mediator{
public:
    virtual void notify(CrewMember*) override ;
    virtual void addColleague(CrewMember*);
private:
    vector<CrewMember*> colleagues;

};


#endif //GEEKHUBPROJECT_CONCRETEMEDIATOR_H
