#include "expression.h"
#include "subexpression.h"

class Quaternary : public SubExpression {
public:
    Quaternary(Expression* left, Expression* first, Expression* second, Expression* third)
        : SubExpression(left, nullptr), first(first), second(second), third(third) {} 

    double evaluate() {
        if (left->evaluate() < 0) return first->evaluate();   
        else if (left->evaluate() == 0) return second->evaluate();
        else return third->evaluate();
    }

private:
    Expression* first;  
    Expression* second;
    Expression* third;
};
