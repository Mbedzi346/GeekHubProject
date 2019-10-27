//
// Created by Orifha Mbedzi on 2019-10-27.
//

#ifndef GEEKHUBPROJECT_FIGHTERHANDLER_H
#define GEEKHUBPROJECT_FIGHTERHANDLER_H


#include "ProblemHandler.h"
#include "Fighter.h"

class FighterHandler : public ProblemHandler{
public:
    FighterHandler(Fighter*);
    virtual void setNextChain(ProblemHandler* handler) override ;
    virtual void handle(int) override ;

private:
    ProblemHandler* next;
    Fighter* fighter;
};


#endif //GEEKHUBPROJECT_FIGHTERHANDLER_H
