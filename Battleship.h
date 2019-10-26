#ifndef BATTLESHIP_H
#define BATTLESHIP_H
#include "Spaceship.h"
#include "Iterator.h"

class Battleship: public Spaceship{
public:
    virtual Iterator* createIterator() override;
};
#endif
