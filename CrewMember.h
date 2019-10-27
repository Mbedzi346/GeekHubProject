#ifndef CREWMEMBER_H
#define CREWMEMBER_H

#include "Person.h"
using namespace std;
class CrewMember : public Person {
public:
    /*CrewMember(CrewMember*);*/
    CrewMember(int r);
    virtual void attach(Person*);
    virtual void detach(Person*);
    virtual void notify();
    virtual void update() override;
    virtual void setCaptain(Person* _captain) override;
    int getRank(){ return rank;}
    //void sendNotification(string, int);
private:
    string announcement;
    CrewMember* captain;
    int rank;

};

#endif
