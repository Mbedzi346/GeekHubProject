#ifndef ENGINEERSFACTORY_H
#define ENGINEERSFACTORY_H

class EngineersFactory : public CrewFactory {


public:
	Engineers* createPerson();
};

#endif
