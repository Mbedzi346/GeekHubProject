#include "LogIterator.h"
#include "FighterTransporter.h"


void FighterTransporter::Iterator* createIterator(){
    return new LogIterator();
}