//
// Created by Orifha Mbedzi on 2019/10/20.
//
#include "Battleship.h"
#include "Iterator.h"
#include "FighterTransporter.h"
#include "LogIterator.h"


Iterator *Battleship::createIterator() {
    return new LogIterator();
}
