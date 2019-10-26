#include "CrewMember.h"
#include "Person.h"
#include "Captain.h"
#include "iostream"
using namespace std;

/**
 * @brief Construct the CrewMember object
 * @param Captain object is passed to initialise the captain member variable
 * */
//CrewMember::CrewMember(CrewMember * cap) {
//    this->captain = cap;
//    announcement = "";
//}

/**
 * @brief Update announcement from the captain object state
 * */
void CrewMember::update() {
    if (announcement != dynamic_cast<Captain*>(captain)->getCrewAnnouncement())
        this->announcement = dynamic_cast<Captain*>(captain)->getCrewAnnouncement();
    cout<<"Crew Annoucement: "<<announcement<<endl;
}

void CrewMember::setCaptain(Person* _captain){
    captain = dynamic_cast<Captain*>(_captain);
}

void CrewMember::attach(Person *p) {

}

void CrewMember::detach(Person *p) {

}

void CrewMember::notify() {

}

CrewMember::CrewMember() {
    setType("crew");
}
