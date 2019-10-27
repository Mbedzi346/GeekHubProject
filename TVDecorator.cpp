//
// Created by lindo on 2019/10/27.
//

#include "TVDecorator.h"

using namespace std;

TVDecorator::TVDecorator(Component* com) : Decorator(com) {

}

string TVDecorator::addedThing() {
    return ", with Imposa MicroLED UHDTV 165-inch";
}

string TVDecorator::description() {
    return Decorator::description() + addedThing();
}
