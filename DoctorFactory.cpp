#include "DoctorFactory.h"
#include "Person.h"
#include "Doctor.h"

Person* DoctorFactory::createPerson() {
	return (Person*) new Doctor();
}
