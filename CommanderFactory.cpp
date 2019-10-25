#include "CommanderFactory.h"
#include "Commander.h"


Person* CommanderFactory::createPerson() {
	return new Commander();
}
