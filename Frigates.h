#ifndef FRIGATES_H
#define FRIGATES_H
#include "Spaceship.h"
#include "Iterator.h"

class Frigates: public Spaceship{
public:
    virtual Iterator* createIterator() override;


};



#endif