#include <string>
#include <stdlib.h>

#include "Critter.h"
#include "AbstractExpression.h"
#include "ConstantExpression.h"
#include "VariableExpression.h"

using namespace std;

/**
* @brief construct critter, initialize the words array to size 3 and populate with basic phrases: no, amica and welcum
* set tolerance to 10. tolerance of 5 and below means the critter is irritated, tolerance above 5 means critter is not irritated
*/
Critter::Critter(){
	words = new AbstractExpression*[3];
	words[0] = new ConstantExpression("No"); // you're not a -
	words[1] = new ConstantExpression("Amica"); // friend
	words[2] = new ConstantExpression("Welcum"); // welcome
	tolerance = 10;
}

/**
* @brief critters respond to interaction attempts, and return a response
* @return returns a string that Crew members then interpreter
*/
AbstractExpression* Critter::interact(){
	if(tolerance <= 3)
		return new VariableExpression(words[0], words[1]); // no amica
	if(tolerance < 6)
		return new VariableExpression(words[0], words[2]); //no welcum
	if(tolerance < 8)
		return new VariableExpression(words[1], words[2]); // amica welcum
	else
		return new VariableExpression(words[2], words[1]); // welcome amica
}

/**
* @brief this method decreases the tolerance of a critter by a random amount between 1 and 3
*/
void Critter::use(){
	// generate random number between 1 and 3 and subtract it from tolerance
	srand(time(NULL));
	int badMood = rand() %  4 + 2;
	tolerance -= badMood;
	if(tolerance < 0) tolerance = 0;
}

/**
 * @brief checks if Critter is still friendly by check it's tolerance level
 * @return boolean indicates if Critter is still friendly
*/
bool Critter::isEnemy(){
	if(tolerance < 5)
		return true;
	return false;
}

/**
 * @brief destructor, deletes dynamically allocated memory (words member variable)
*/
Critter::~Critter(){
	// clean up the dynamic words array
	for(int i= 0; i < 3; i++){
		delete words[i];
		words[i] = nullptr;
	}
	delete [] words;
	words = nullptr;
}