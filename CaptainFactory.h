#ifndef CAPTAINFACTORY_H
#define CAPTAINFACTORY_H

#include "Captain.h"
#include "CrewFactory.h"

class CaptainFactory : public CrewFactory {
	public:
		Person* createPerson();
};

#endif
