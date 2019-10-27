//
// Created by Orifha Mbedzi on 2019-10-27.
//

#include "Engineers.h"

Engineers::Engineers(int r) : CrewMember(r) {

}

void Engineers::sendReport(string s) {
    auto mediator = getMediator();
    this->setReport(s);
    mediator->notify(this);
}

