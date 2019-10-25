
#include "Passenger.h"
using namespace std;

/**
 * @brief Construct the Passenger object
 * @param Captain object is passed to initialise the captain member variable
 * */
Passenger::Passenger(CrewMember * cap) {
    this->captain = cap;
    announcement = "";
}

/**
 * @brief Update announcement from the captain object state
 * */
void Passenger::update() {
    if (announcement != captain->getPaxAnnouncement)
        this->announcement = captain->getPaxAnnouncement();
}

/**
 * @brief initialize the captain member variable if not initialized via constructor
 * */
void Passenger::setCrewMember(CrewMember* _captain){
    captain = _captain;
}