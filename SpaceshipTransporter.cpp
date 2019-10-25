#include "LogIterator.h"
#include "FighterTransporter.h"

/**
 * @brief Creates a LogIterator Object for FighterTransporter
 * @return returns LogIterator object
 * */
LogIterator* FighterTransporter::Iterator* createIterator(){
    return new LogIterator();
}