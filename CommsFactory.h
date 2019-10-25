#ifndef COMMSFACTORY_H
#define COMMSFACTORY_H

#include "CrewFactory.h"
#include "Person.h"

class CommsFactory : public CrewFactory {


public:
	Person* createPerson();
};

#endif
