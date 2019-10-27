//
// Created by lindo on 2019/10/27.
//
#include <string>
#include "AirconditioningDecorator.h"
using namespace std;

AirconditioningDecorator::AirconditioningDecorator(Component* com) : Decorator(com) {

}

string AirconditioningDecorator::addedThing() {
    return ", with air-conditioning";
}

string AirconditioningDecorator::description() {
    return Decorator::description() + addedThing();
}
