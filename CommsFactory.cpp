#include "CommsFactory.h"

Person* CommsFactory::createPerson() {
	return new Comms();
}
