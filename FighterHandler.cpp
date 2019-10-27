//
// Created by Orifha Mbedzi on 2019-10-27.
//

#include "FighterHandler.h"

void FighterHandler::setNextChain(ProblemHandler* handler) {
    next = handler;
}

void FighterHandler::handle(int level) {
    if(level <= fighter->getRank())
        cout<<"Skilled fighter has taken care of the problem."<<endl;
    else {
        cout<<"Nope, get a bigger guy to do this."<<endl;
        next->handle(level);
    }
}

FighterHandler::FighterHandler(Fighter *f) {
    fighter  = f;
}

