//
// Created by Orifha Mbedzi on 2019-10-27.
//

#ifndef GEEKHUBPROJECT_PROBLEMHANDLER_H
#define GEEKHUBPROJECT_PROBLEMHANDLER_H

#include <iostream>
using namespace std;

class ProblemHandler {
public:
    virtual void setNextChain(ProblemHandler* handler){};
    virtual void handle(int) = 0;

};


#endif //GEEKHUBPROJECT_PROBLEMHANDLER_H
