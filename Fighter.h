#ifndef FIGHTER_H
#define FIGHTER_H

#include "CrewMember.h"

class Fighter : public CrewMember {
    public:
    Fighter(int r);
    virtual void update() override;
    virtual void setCaptain(Person* _captain);
};

#endif
