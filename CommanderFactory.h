#ifndef COMMANDERFACTORY_H
#define COMMANDERFACTORY_H

#include "CrewFactory.h"
#include "Person.h"

class CommanderFactory : public CrewFactory {
	public:
		Person* createPerson();
};

#endif
