#ifndef PASSENGERFACTORY_H
#define PASSENGERFACTORY_H

class PassengerFactory : public PersonFactory {


public:
	Passenger* createPerson();
};

#endif
