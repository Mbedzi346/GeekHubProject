//
// Created by Orifha Mbedzi on 2019-10-27.
//

#include "EngineerHandler.h"

EngineerHandler::EngineerHandler(Engineers *e) {
    engineer = e;
}

void EngineerHandler::setNextChain(ProblemHandler *handler) {
    next = handler;
}

void EngineerHandler::handle(int level) {
    if(level <= engineer->getRank())
        cout<<"Fixed it!"<<endl;
    else {
        cout << "Nope, can't do it. I'll call my supervisor..." << endl;
        next->handle(level);
    }

}
