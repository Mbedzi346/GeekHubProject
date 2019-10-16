#ifndef NAVIGATORFACTORY_H
#define NAVIGATORFACTORY_H

class NavigatorFactory : public CrewFactory {


public:
	Navigator* createPerson();
};

#endif
