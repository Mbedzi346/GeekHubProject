//
// Created by Orifha Mbedzi on 2019-10-07.
//

#ifndef GEEKHUBPROJECT_SPACESTATION_H
#define GEEKHUBPROJECT_SPACESTATION_H
#include "Spaceship.h"
#include <string>
#include <vector>
using namespace std;

class SpaceStation : public Spaceship{
private:
    int threatLevel;
    vector<Spaceship*> ships;
};


#endif //GEEKHUBPROJECT_SPACESTATION_H
