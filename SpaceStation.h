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
    static SpaceStation* _instance;
protected:
    SpaceStation();
public:
    static SpaceStation* instance();
    virtual Iterator* createIterator(){};
};


#endif //GEEKHUBPROJECT_SPACESTATION_H
