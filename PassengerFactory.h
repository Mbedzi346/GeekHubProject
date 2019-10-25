#ifndef PASSENGERFACTORY_H
#define PASSENGERFACTORY_H

#include "PersonFactory.h"
#include "Passenger.h"

class PassengerFactory : public PersonFactory{


public:
	 Person* createPerson();
};

#endif
