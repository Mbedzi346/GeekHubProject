#ifndef CAPTAINFACTORY_H
#define CAPTAINFACTORY_H

class CaptainFactory : public CrewFactory {
	public:
		Captain* createPerson();
};

#endif
