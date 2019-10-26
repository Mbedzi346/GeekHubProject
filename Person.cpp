#include "Person.h"

/**
 * @brief construct Person object
 * @param String type, CrewMember or Passenger
 * @param String name, name of the Person
 * */
//Person::Person(std::string t, std::string n) {
//    type = t;
//    name = n;
//
//}
Person::Person(){}

std::string Person::getName(){
    return name;
}
void Person::setName(std::string n ){
    name = n;
}

std::string Person::getType(){
    return type;
}

void Person::setType(std::string t){
    type = t;
}
