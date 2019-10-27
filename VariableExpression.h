#ifndef VARIABLEEXPRESSION_H
#define VARIABLEEXPRESSION_H

#include <string>
#include "AbstractExpression.h"
#include "Context.h"
using namespace std;

class VariableExpression: public AbstractExpression{
    private:
        AbstractExpression* operand1;
        AbstractExpression* operand2;
    public:
        VariableExpression(AbstractExpression* _op1);
        VariableExpression(AbstractExpression* _op1, AbstractExpression* _op2);
        virtual string evaluate(Context&);
        virtual void setOperands(AbstractExpression* _op1, AbstractExpression* _op2=nullptr);
};
#endif