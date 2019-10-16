#ifndef COMMANDERFACTORY_H
#define COMMANDERFACTORY_H

class CommanderFactory : public CrewFactory {
	public:
		Commander* createPerson();
};

#endif
