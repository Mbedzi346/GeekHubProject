//
// Created by Orifha Mbedzi on 2019/10/20.
//
#include "Battleship.h"
#include "LogIterator.h"


void FighterTransporter::Iterator* createIterator(){
    return new LogIterator();
}