#include "CaptainFactory.h"

Person* CaptainFactory::createPerson() {
	return new Captain();
}
