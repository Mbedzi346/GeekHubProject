#include "CrewMember.h"
using  namespace std;

/**
 * @brief Construct the CrewMember object
 * @param Captain object is passed to initialise the captain member variable
 * */
CrewMember::CrewMember(CrewMember * cap) {
    this->captain = cap;
    announcement = "";
}

/**
 * @brief Update announcement from the captain object state
 * */
void CrewMember::update() {
    if (announcement != captain->getCrewAnnouncement)
        this->announcement = captain->getCrewAnnouncement();
}