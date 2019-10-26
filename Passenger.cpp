
#include "Passenger.h"
#include "Captain.h"
#include <iostream>
using namespace std;

/**
 * @brief Construct the Passenger object
 * @param Captain object is passed to initialise the captain member variable
 * */
//Passenger::Passenger(CrewMember * cap) {
//    this->captain = cap;
//    announcement = "";
//}

/**
 * @brief Update announcement from the captain object state
 * */
void Passenger::update() {
    if (announcement != dynamic_cast<Captain*>(captain)->getPaxAnnouncement())
        announcement = dynamic_cast<Captain*>(captain)->getPaxAnnouncement();
    cout<<"Ladies & Gentlement, This is your captain speaking: "<<announcement<<endl;
}

/**
 * @brief initialize the captain member variable if not initialized via constructor
 * */
void Passenger::setCaptain(Person* _captain){
    captain = dynamic_cast<Captain*>(_captain);
}