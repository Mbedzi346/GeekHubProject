#ifndef BATTLESHIP_H
#define BATTLESHIP_H
#include "Spaceship.h"

class Battleship: public Spaceship{
public:
    virtual void Iterator* createIterator() override;
};
#endif
