//
// Created by lindo on 2019/10/27.
//
#include "PremiumSoftwareDecorator.h"
using namespace std;

PremiumSoftwareDecorator::PremiumSoftwareDecorator(Component * com) : Decorator (com) {

}

string PremiumSoftwareDecorator::addedThing() {
    return ", with the latest premium software embedded with Artificial Intelligence";
}

string PremiumSoftwareDecorator::description() {
    return Decorator::description() + addedThing();
}
