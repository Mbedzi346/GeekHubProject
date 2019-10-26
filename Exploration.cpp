#include "Exploration.h"
#include "LogIterator.h"
#include "Iterator.h"
#include "FighterTransporter.h"

/**
 * @brief Creates a LogIterator Object for Exploration
 * @return returns LogIterator object
 * */


Iterator *Exploration::createIterator() {
    return new LogIterator(getLogs());
}
