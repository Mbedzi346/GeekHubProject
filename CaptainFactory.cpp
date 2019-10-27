#include "CaptainFactory.h"
#include "Captain.h"
#include "Person.h"

/**
 * @brief concrete factory creates Captain Objects
 * @return returns Captain Object which is a Person (ancestor class)
 * */
Person* CaptainFactory::createPerson() {
	return new Captain(10);
}
