#include "CommsFactory.h"
#include "Comms.h"

Person* CommsFactory::createPerson() {
	return (Person*) new Comms();
}
