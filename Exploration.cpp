
#include "Exploration.h"
#include "LogIterator.h"


void FighterTransporter::Iterator* createIterator(){
    return new LogIterator();
}