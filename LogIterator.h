//
// Created by Orifha Mbedzi on 2019-10-20.
//

#ifndef GEEKHUBPROJECT_LOGITERATOR_H
#define GEEKHUBPROJECT_LOGITERATOR_H

#include "Iterator.h"
#include <vector>
using namespace std;

class LogIterator : public Iterator{
    public:
        LogIterator(vector<string> l){ logs = l;};
        LogIterator(){};
        void setLog(vector<string> l){logs=l;};
        virtual string first() override ;
        virtual string next() override ;
        bool hasNext() override;
        virtual string current() override ;

    private:
        vector<string> logs;
        int currentPos;
};


#endif //GEEKHUBPROJECT_LOGITERATOR_H
