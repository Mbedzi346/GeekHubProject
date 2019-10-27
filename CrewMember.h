#ifndef CREWMEMBER_H
#define CREWMEMBER_H

#include "Person.h"
#include "Mediator.h"
using namespace std;
class Mediator;
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
    void setMediator(Mediator*);
    Mediator* getMediator();
    void setReport(string s);
    virtual void sendReport(string);
    string getReport(){ return report;};
    void acknowledge(string s);
    //void sendNotification(string, int);
private:
    string announcement;
    CrewMember* captain;
    int rank;
    Mediator* mediator;
    string report;
};

#endif
