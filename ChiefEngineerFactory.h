#ifndef CHIEFENGINEERFACTORY_H
#define CHIEFENGINEERFACTORY_H

#include "Person.h"
#include "CrewFactory.h"

class ChiefEngineerFactory : public CrewFactory {


public:
	Person* createPerson();
};

#endif
