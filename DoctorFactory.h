#ifndef DOCTORFACTORY_H
#define DOCTORFACTORY_H

#include "CrewFactory.h"
#include "Person.h"

class DoctorFactory : public CrewFactory {
	public:
		Person* createPerson();
};

#endif
