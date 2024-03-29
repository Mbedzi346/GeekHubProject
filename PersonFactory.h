#ifndef PERSONFACTORY_H
#define PERSONFACTORY_H

#include "Person.h"

class PersonFactory
{
	public:
		virtual Person* createPerson() = 0;
};

#endif
