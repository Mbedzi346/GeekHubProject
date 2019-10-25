#ifndef NAVIGATORFACTORY_H
#define NAVIGATORFACTORY_H

#include "Navigator.h"
#include "CrewFactory.h"

class NavigatorFactory : public PersonFactory {


public:
	 virtual Person* createPerson() override;
};

#endif
