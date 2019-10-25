#ifndef PFIGHTERFACTORY_H
#define PFIGHTERFACTORY_H

#include "CrewFactory.h"

class PFighterFactory : public CrewFactory {
	public:
        Person* createPerson();
};

#endif
