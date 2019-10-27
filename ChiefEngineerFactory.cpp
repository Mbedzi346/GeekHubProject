#include "ChiefEngineerFactory.h"
#include "ChiefEngineer.h"

Person* ChiefEngineerFactory::createPerson() {
    return new ChiefEngineer(10);
}
