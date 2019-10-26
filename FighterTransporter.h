#ifndef FIGHTERTRANSPORTER_H
#define FIGHTERTRANSPORTER_H
#include "Spaceship.h"
class FighterTransporter: public Spaceship{
public:
    virtual Iterator* createIterator() override;
};
#endif