#ifndef CAPTAIN_H
#define CAPTAIN_H

#include "Person.h"
#include <vector>

#include "CrewMember.h"
using namespace std;

class Captain : public CrewMember {
public:
    Captain();

    virtual void attach(Person*) override ;
    virtual void detach(Person*) override ;
    virtual void notify() override;
    void setPaxAnnouncement(std::string s);
    void setCrewAnnouncement(std::string s);
    void setGeneralAnnouncement(std::string s);
    string getPaxAnnouncement();
    string getCrewAnnouncement();
    string getGeneralAnnouncement();
private:
    std::vector<Person*> passengers;
    std::vector<Person*> crew;
    std::string paxAnnouncement;
    std::string crewAnnouncement;
    std::string generalAnnouncement;
};

#endif
