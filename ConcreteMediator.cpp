//
// Created by Orifha Mbedzi on 2019-10-27.
//

#include "ConcreteMediator.h"

void ConcreteMediator::notify(CrewMember *m) {
    string report = m->getReport();
    for(auto i : colleagues)
        i->acknowledge(report);
}

void ConcreteMediator::addColleague(CrewMember *m) {
    colleagues.push_back(m);
}
