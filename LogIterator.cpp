//
// Created by Orifha Mbedzi on 2019-10-20.
//

#include "LogIterator.h"

string LogIterator::first() {
    return logs.front();
}
 string LogIterator::next() {
    if(!hasNext())
        return nullptr;
     return logs.at(currentPos++);
 }
bool LogIterator::hasNext() {
    if((int)currentPos >= (int)logs.size())
        return false;
    return true;
}
string LogIterator::current(){
    return logs.at(currentPos);
}
