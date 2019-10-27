#ifndef CONSTANTEXPRESSION_H
#define CONSTANTEXPRESSION_H

#include <string>
#include "AbstractExpression.h"

using namespace std;

class ConstantExpression: public AbstractExpression{
    private:
        string word;
    public:
        ConstantExpression(string _exp);
        virtual string evaluate(Context& _ctx);
};
#endif