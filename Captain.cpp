#include "Captain.h"
#include <iostream>
#include <algorithm>

/**
 * @brief attach observer to the observers list
 * @param Person object to add to the list
 * */
void Captain::attach(Person* person){
    if(person->getType() == "crew")
        crew.push_back(person);
    else
        passengers.push_back(person);
}

/**
 * @brief detach observer from the observers list
 * @param Person object to remove from the list
 * */
void Captain::detach(Person* person){
    if(person->getType() == "crew") {
        auto element = find(crew.begin(), crew.end(), person);
        crew.erase(element);
    }
    else {
        auto element = find(passengers.begin(), passengers.end(), person);
        passengers.erase(element);
    }

}
/**
 * @brief Notify all the observers
 * */
void Captain::notify(){
    if(type == -1){
        cout<<"Gotta announce something first, Captain."<<endl;
    }
    if(type == 1){
        for(auto i : passengers)
            i->update();
    } else if(type == 0){
        for(auto i : crew)
            i->update();
    } else if(type == 2){
        for(auto i : passengers)
            i->update();
        for(auto i : crew)
            i->update();
    }
    type = -1;
}
void Captain::setPaxAnnouncement(std::string s){
    paxAnnouncement = s;
    type = 1;
};
void Captain::setCrewAnnouncement(std::string s){
    crewAnnouncement = s;
    type = 0;
}
void Captain::setGeneralAnnouncement(std::string s){
    setCrewAnnouncement(s);
    setPaxAnnouncement(s);
    type = 2;
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