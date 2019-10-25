#include "NavigatorFactory.h"
#include "Navigator.h"
#include "Person.h"

/**
 * @brief concrete factory method to create a Navigator Object
 * @return returns a Navigator Object which is a Person (Abstract ancestor class)
 * */
Person* NavigatorFactory::createPerson() {
    return  (Person*) new Navigator();
}
