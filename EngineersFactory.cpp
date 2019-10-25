#include "EngineersFactory.h"
#include "Engineers.h"

Person* EngineersFactory::createPerson() {
	return new Engineers();
}
