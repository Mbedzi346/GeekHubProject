//
// Created by Orifha Mbedzi on 2019-10-27.
//

#include "Doctor.h"

Doctor::Doctor(int r) : CrewMember(r) {

}

void Doctor::sendReport(string s) {
    auto mediator = getMediator();
    this->setReport(s);
    mediator->notify(this);
}

