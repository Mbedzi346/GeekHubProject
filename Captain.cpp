#include "Captain.h"
#include <algorithm.h>

/**
 * @brief attach observer to the observers list
 * @param Person object to add to the list
 * */
void Captain::attach(Person* person){
    if(person->getType() == "crew")
        crew->push_back(person);
    else
        passengers->push_back(person);
}

/**
 * @brief detach observer from the observers list
 * @param Person object to remove from the list
 * */
void Captain::detach(Person* person){
    auto element;
    if(person->getType() == "crew") {
        element = find(crew.begin(), crew.end(), person);
        crew.erase(element);
    }
    else {
        element = find(passengers.begin(), passengers.end(), person);
        passengers.erase(element);
    }

}
/**
 * @brief Notify all the observers
 * */
void Captain::notify(){
    for(auto i : members)
        members->update();
}
void Captain::setPaxAnnouncement(std::string s){
    paxAnnouncement = s;
};
void Captain::setCrewAnnouncement(std::string s){
    crewAnnouncement = s;
}
void Captain::setGeneralAnnouncement(std::string s){
    setCrewAnnouncement(s);
    setPaxAnnouncement(s);
}

string Captain::getPaxAnnouncement(){
    return paxAnnouncement;
}
string Captain::getCrewAnnouncement(){
    return crewAnnouncement;
}
string Captain::getGeneralAnnouncement(){
    return generalAnnouncement;
}