//
// Created by Orifha Mbedzi on 2019-10-20.
//
#include <iostream>
#include "Spaceship.h"


double Spaceship::getDisplacement(){
    return displacement;
}
void Spaceship::setDisplacement(double d){
    displacement = d;
}
double Spaceship::getPower(){
    return power;
}
void Spaceship::setPower(double p){
    power = p;
}
double Spaceship::getThrust(){
    return thrust;
}
void Spaceship::setThrust(double t){
    thrust = t;
}
double Spaceship::getMaxSpeed(){
    return maxSpeed;
}
void Spaceship::setMaxSpeed(double s){
    maxSpeed = s;
}
double Spaceship::getStallSpeed(){
    return stallSpeed;
}
void Spaceship::setStallSpeed(double s){
    stallSpeed = s;
}
double Spaceship::getCrew(){
    return crew;
}
void Spaceship::setCrew(double i){
    crew = i;
}
double Spaceship::getPassengers(){
    return passengers;
}
void Spaceship::setPassengers(double p){
    passengers = p;
}

void Spaceship::addLogEntry(string log){
    logs.push_back(log);
}
void Spaceship::removeLogEntry(string log){

}

bool Spaceship::isEmpty(){
    return logs.empty();
}

vector<string> Spaceship::getLogs() {
    return logs;
}

void Spaceship::handleFuel() {
    state->handle();
}

void Spaceship::setState(State *s) {
    state = s;
}

Memento *Spaceship::createMemento() {
    Memento* memento = new Memento();
    memento->setState(state);
    return memento;
}

void Spaceship::setMemento(Memento *m) {
    state = m->getState();
}

void Spaceship::executeInvasion() {
    cout << "This is your commander, proceed with the invasion of the newly found planet." << endl;
}
