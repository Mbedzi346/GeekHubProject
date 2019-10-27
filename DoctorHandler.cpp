//
// Created by Orifha Mbedzi on 2019-10-27.
//

#include "DoctorHandler.h"

void DoctorHandler::setNextChain(ProblemHandler* handler) {
    next = handler;
}

void DoctorHandler::handle(int level) {
    if(level <= doctor->getRank())
        cout<<"Patient taken care of."<<endl;
    else {
        cout<<"This needs a higher ranked Doctor..."<<endl;
        next->handle(level);
    }
}

DoctorHandler::DoctorHandler(Doctor *d) {
    doctor = d;
}
