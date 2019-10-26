//
// Created by Orifha Mbedzi on 2019-10-20.
//

#ifndef ITERATOR_H
#define ITERATOR_H
#include <string>
using namespace std;

class Iterator {
    public:
        Iterator(){};
        virtual string first() = 0;
        virtual string next() = 0;
        virtual bool hasNext() = 0;
        virtual string current() = 0;
};
#endif
