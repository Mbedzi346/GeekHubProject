#include "LogIterator.h"
#include "Iterator.h"
#include "SpaceshipTransporter.h"

/**
 * @brief Creates a LogIterator Object for SpaceshipTransporter
 * @return returns LogIterator object
 * */
Iterator* SpaceshipTransporter::createIterator(){
    return new LogIterator(getLogs());
}