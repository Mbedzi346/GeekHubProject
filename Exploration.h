#ifndef EXPLORATION_H
#define EXPLORATION_H
#include "Spaceship.h"
#include "Exploration.h"
#include "Iterator.h"

class Exploration: public Spaceship {
    public:
        virtual Iterator* createIterator() override;

};
#endif
