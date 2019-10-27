//
// Created by Orifha Mbedzi on 2019-10-27.
//

#ifndef GEEKHUBPROJECT_DOCTORHANDLER_H
#define GEEKHUBPROJECT_DOCTORHANDLER_H


#include "ProblemHandler.h"
#include "Doctor.h"

class DoctorHandler : public ProblemHandler{
public:
    DoctorHandler(Doctor* );
    virtual void setNextChain(ProblemHandler* handler) override ;
    virtual void handle(int) override ;

private:
    ProblemHandler* next;
    Doctor* doctor;
};


#endif //GEEKHUBPROJECT_DOCTORHANDLER_H
