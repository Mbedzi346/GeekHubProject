#ifndef PASSENGER_H
#define PASSENGER_H

using namespace std;

class Passenger : public Person {
public:
    Passenger(CrewMember*);
    virtual void update() override;

private:
    string announcement;
    CrewMember* captain;

};

#endif
