#include "PassengerFactory.h"
#include "Passenger.h"

/**
 * @brief concrete factory method to create a Passenger Object
 * @return returns a Passenger Object which is a Person (Abstract ancestor class)
 * */
Person* PassengerFactory::createPerson() {
	return (Person*) new Passenger();
}
