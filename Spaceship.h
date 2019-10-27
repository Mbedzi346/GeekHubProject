#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <vector>
#include <string>
#include "Iterator.h"
#include "State.h"
#include "Memento.h"
class State;
using namespace std;

class Spaceship{
private:
    double displacement;
    double power;
    double speed;
    double thrust;
    double maxSpeed;
    double stallSpeed;
    int crew;
    int passengers;
    Iterator* iterator;
    vector<string> logs;
    State* state;
public:
    double getDisplacement();
    void setDisplacement(double);
    double getPower();
    void setPower(double);
    double getThrust();
    void setThrust(double);
    double getMaxSpeed();
    void setMaxSpeed(double);
    double getStallSpeed();
    void setStallSpeed(double);
    double getCrew();
    void setCrew(double);
    double getPassengers();
    void setPassengers(double);
    virtual Iterator* createIterator() = 0;
    void addLogEntry(string log);
    void removeLogEntry(string log);
    void setState(State*);
    State* getState() {return state;};
    void handleFuel();
    vector<string> getLogs();
    bool isEmpty();
    Memento* createMemento();
    void setMemento(Memento*);
    virtual ~Spaceship() {};
};
#endif