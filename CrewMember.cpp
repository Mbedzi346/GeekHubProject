#include "CrewMember.h"
#include "Person.h"
#include "Captain.h"
#include "iostream"
#include "VariableExpression.h"
#include "AbstractExpression.h"
#include <cstdlib>

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

/**
 * @brief CrewMember encounters a Critter and interacts  with it.
 * interaction involves calling one or all the member functions of the critter object
 * could have done this in the main but since it is the CrewMembers interacting with the critter, the code is placed in
 * CrewMember's encounter function
 * @param _critter for CrewMember to interac with
 * @param _ctx context for storing and lookup functionality
 */
void CrewMember::encounterCritter(Critter *_critter, Context *_ctx) {
    AbstractExpression* _intepreter = new VariableExpression(_critter->interact());
    cout<<"CreMember encounters Critter."<<endl;
    cout<<"Critter: "<<_intepreter->evaluate(*_ctx)<<endl;
    int useCritterCount = rand() % 14 + 6;
    // use critter random amount of times
    for(int i = 0; i < useCritterCount; i++){
        _critter->use();
        if(_critter->isEnemy()){
            cout<<"Critter is now angry and trying to fight CrewMember"<<endl;
            _intepreter->setOperands(_critter->interact());
            _intepreter->evaluate(*_ctx);
            cout<<"Critter: "<<_intepreter->evaluate(*_ctx)<<endl;
            break;
        }
    }
    if(!_critter->isEnemy()){
        _intepreter->setOperands(_critter->interact());
        _intepreter->evaluate(*_ctx);
    }

    delete _intepreter;
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

CrewMember::CrewMember(int r) {
    setType("crew");
    rank = r;
}

void CrewMember::setMediator(Mediator *mediator1) {
    mediator = mediator1;
}

void CrewMember::sendReport(string s) {
    report = s;
}

void CrewMember::acknowledge(string s) {
    cout<<"CrewMember #"<<this<<" has acknowledged report from fellow colleague: "<<s<<endl;
}

Mediator *CrewMember::getMediator() {
    return mediator;
}

void CrewMember::setReport(string s) {
    report = s;
}
