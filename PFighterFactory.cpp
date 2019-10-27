#include "PFighterFactory.h"
#include "Fighter.h"
#include "Person.h"

/**
 * @brief concrete factory method to create a Fighter Object
 * @return returns a Fighter Object which is a Person (Abstract ancestor class)
 * */
Person* PFighterFactory::createPerson() {
	return (Person*) new Fighter(1);
}
