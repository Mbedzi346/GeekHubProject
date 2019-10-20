#include "Spaceship.h"
#include "SPFighterFactory.h"
#include "FighterTransporter.h"
#include "LogIterator.h"

void FighterTransporter::Iterator* createIterator(){
    return new LogIterator();
}
