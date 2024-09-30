#include "expression.h"
#include "subexpression.h"

class Ternary : public SubExpression {
public:
    Ternary(Expression* left, Expression* middle, Expression* right)
        : SubExpression(left, right), middle(middle), third(right) {}

    double evaluate() {
        return left->evaluate() != 0 ? middle->evaluate() : third->evaluate();
    }

private:
    Expression* middle; 
    Expression* third;  
};
