#ifndef CREWFACTORY_H
#define CREWFACTORY_H

#include "Person.h"
#include "PersonFactory.h"

class CrewFactory : public PersonFactory {
public:
	virtual Person* createPerson() override;
};

#endif
