#ifndef PERSONFACTORY_H
#define PERSONFACTORY_H

class PersonFactory
{
	public:
		virtual Person* createPerson() = 0;
};

#endif
