#ifndef ENGINEERS_H
#define ENGINEERS_H

#include "CrewMember.h"

class Engineers : public CrewMember {
    public:
        Engineers(int r);
    virtual void sendReport(string) override;

};

#endif
