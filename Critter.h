#ifndef CRITTER_H
#define CRITTER_H

#include <string>
#include "AbstractExpression.h"

using namespace std;
class Critter{
	private:
		AbstractExpression** words;
		int tolerance;
	public:
		Critter();
		void use();
		bool isEnemy();
		AbstractExpression* interact();
		~Critter();
};
#endif