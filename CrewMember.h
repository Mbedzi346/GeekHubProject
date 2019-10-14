#ifndef CREWMEMBER_H
#define CREWMEMBER_H

using namespace std;
class CrewMember : public Person {
public:
    CrewMember(CrewMember*);
    virtual void attach(Person*){};
    virtual void detach(Person*){};
    virtual void notify(){};
    virtual void update() override;
private:
    string announcement;
    CrewMember* captain;

};

#endif
