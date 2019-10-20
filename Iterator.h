//
// Created by Orifha Mbedzi on 2019-10-20.
//

#ifndef GEEKHUBPROJECT_LOGITERATOR_H
#define GEEKHUBPROJECT_LOGITERATOR_H

#include <string>

class Iterator {
public:
    Iterator();
    virtual string first() = 0;
    virtual string next() = 0;
    bool hasNext() = 0;
    virtual string current() = 0;

};


#endif //GEEKHUBPROJECT_LOGITERATOR_H
