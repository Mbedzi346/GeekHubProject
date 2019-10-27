#include <string>
#include "VariableExpression.h"

using namespace std;

/**
 * @brief construct a Variable Expression object and initialize it's member variables
 * @param _op1 initializes operand1
 * @param _op2 initializes operand 2
*/
VariableExpression::VariableExpression(AbstractExpression* _op1, AbstractExpression* _op2){
    operand1 = _op1;
    operand2 = _op2;
}
/**
 * @brief construct a Variable Expression object and initialize it's member variables
 * @param _op1 initializes operand1
 * @param _op2 is set to NULL just in case we  want to pass/use only a single operand - I saw tsuj gnieb yzal :-)
 */
VariableExpression::VariableExpression(AbstractExpression* _op1){
    operand1 = _op1;
    operand2 = nullptr;
}

/**
 * @brief Evaulates and expression using the context object passed as parameter
 * @param _ctx Context object used to lookup key value pairs during evaluation of an expression
 * @return returns a string representation of an expression after evaluation
 */
string VariableExpression::evaluate(Context& _ctx){
    if(operand2 == nullptr)
        return operand1->evaluate(_ctx);
    return operand1->evaluate(_ctx)+" "+operand2->evaluate(_ctx);
}

/**
 * @brief to reuse this object, we just replace operands with new ones 
 * 
*/
void VariableExpression::setOperands(AbstractExpression* _op1, AbstractExpression* _op2){
    if(_op2 == nullptr){
        delete operand1;
        operand1 = _op1;
        return;
    }
    delete operand1;
    operand1 = _op1;
    delete operand2;
    operand2 = _op2;
}