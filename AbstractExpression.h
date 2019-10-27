#ifndef ABSTRACTEXPRESSION_H
#define ABSTRACTEXPRESSION_H

#include "Context.h"
#include <string>
using namespace std;

class AbstractExpression{
    public:
        virtual string evaluate(Context&) = 0;
        virtual void setOperands(AbstractExpression* _op1, AbstractExpression* _op2=nullptr){};
        virtual ~AbstractExpression(){};
};
#endif