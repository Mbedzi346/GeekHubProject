#ifndef DOCTOR_H
#define DOCTOR_H

#include "CrewMember.h"

class Doctor : public CrewMember {
public:
    Doctor(int r);
    virtual void sendReport(string) override;


};

#endif
