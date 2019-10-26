#include "FighterTransporter.h"
#include "Iterator.h"
#include "LogIterator.h"

Iterator* FighterTransporter::createIterator(){
    return new LogIterator(getLogs());
}
