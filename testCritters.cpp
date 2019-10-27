#include <iostream>
#include "Critter.h"
#include "Context.h"
#include "AbstractExpression.h"
#include "ConstantExpression.h"
#include "VariableExpression.h"

using namespace std;

int main(){
    Critter* _critter = new Critter();
    AbstractExpression* _interpreter;
    Context* _ctx = new Context();
    _ctx->assign("No", "You're not");
    _ctx->assign("Welcum", "Welcome");
    _ctx->assign("Amica", "Friend");
    
    _interpreter = new VariableExpression(_critter->interact());
    cout<<"Interpreted: "<<_interpreter->evaluate(*_ctx)<<endl;
    _critter->use();
    _critter->use();
    _critter->use();
    _critter->use();
    _critter->use();_critter->use();_critter->use();_critter->use();_critter->use();_critter->use();
    _interpreter->setOperands(_critter->interact());
    cout<<"Interpreted: "<<_interpreter->evaluate(*_ctx)<<endl;



    delete _critter;
    delete _ctx;
    delete _interpreter;
    return 0;
}