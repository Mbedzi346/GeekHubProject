#ifndef DOCTORFACTORY_H
#define DOCTORFACTORY_H

class DoctorFactory : public CrewFactory {
	public:
		Doctor* createPerson();
};

#endif
