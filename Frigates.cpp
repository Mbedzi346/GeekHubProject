//
// Created by Orifha Mbedzi on 2019-10-26.
//

#include "Frigates.h"
#include "LogIterator.h"

Iterator *Frigates::createIterator() {
    Iterator* iterator = new LogIterator(getLogs());
    return iterator;
}

