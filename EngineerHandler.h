//
// Created by Orifha Mbedzi on 2019-10-27.
//

#ifndef GEEKHUBPROJECT_ENGINEERHANDLER_H
#define GEEKHUBPROJECT_ENGINEERHANDLER_H


#include "ProblemHandler.h"
#include "Engineers.h"
class EngineerHandler : public ProblemHandler{
public:
    EngineerHandler(Engineers* e);
    virtual void setNextChain(ProblemHandler* handler) override;
    virtual void handle(int) override;
private:
    ProblemHandler* next;
    Engineers* engineer;
};


#endif //GEEKHUBPROJECT_ENGINEERHANDLER_H
