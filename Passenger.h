#ifndef PASSENGER_H
#define PASSENGER_H

#include "CrewMember.h"
#include "Person.h"

using namespace std;

class Passenger : public Person {
public:
    Passenger(){};
//    Passenger(CrewMember*);
//    void setCrewMember(CrewMember*);
    virtual void update() override;
    virtual void setCaptain(Person* _captain);

private:
    string announcement;
    CrewMember* captain;

};

#endif
