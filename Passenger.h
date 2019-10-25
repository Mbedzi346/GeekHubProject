#ifndef PASSENGER_H
#define PASSENGER_H

#include "CrewMember.h"

using namespace std;

class Passenger : public Person {
public:
    Passenger();
    Passenger(CrewMember*);
    void setCrewMember(CrewMember*);
    virtual void update() override;

private:
    string announcement;
    CrewMember* captain;

};

#endif
