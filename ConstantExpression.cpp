#include <string>
#include "ConstantExpression.h"

using namespace std;

/**
 * @brief construct the ConstantExpression object
 * @param _exp string value to initialize word
*/
ConstantExpression::ConstantExpression(string _exp){
    word = _exp;
}

/**
 * @brief Evaulates and expression using the context object passed as parameter
 * @param _ctx Context object used to lookup key value pairs during evaluation of an expression
 * @return returns a string representation of an expression after evaluation
 */
string ConstantExpression::evaluate(Context& _ctx){
    return _ctx.lookup(word);
}