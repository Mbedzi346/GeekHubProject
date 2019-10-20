#ifndef EXPLORATION_H
#define EXPLORATION_H
#include "Spaceship.h"

class Exploration: public Spaceship {
public:
    virtual void Iterator* createIterator() override;

};
#endif
