#include "Exploration.h"
#include "LogIterator.h"
#include "Iterator.h"

/**
 * @brief Creates a LogIterator Object for Exploration
 * @return returns LogIterator object
 * */
Iterator* FighterTransporter::createIterator(){
    return new LogIterator();
}