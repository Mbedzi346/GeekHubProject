#ifndef ENGINEERSFACTORY_H
#define ENGINEERSFACTORY_H

#include "CrewFactory.h"
#include "Person.h"

class EngineersFactory : public CrewFactory {


public:
	Person* createPerson();
};

#endif
