
#include <iostream>
#include <sstream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "multiply.h"
#include "divide.h"
#include "modulus.h"
#include "exponent.h"
#include "max.h"
#include "min.h"
#include "average.h"
#include "negation.h"

SubExpression::SubExpression(Expression* left, Expression* right) {
    this->left = left;
    this->right = right;
}

Expression* SubExpression::parse(stringstream& in) {
    Expression* left;
    Expression* right;
    char operation, paren;

    left = Operand::parse(in);
    in >> operation;
    right = Operand::parse(in);
    in >> paren;

    switch (operation) {
        case '+': return new Plus(left, right);
        case '-': return new Minus(left, right);
        case '*': return new Multiply(left, right);
        case '/': return new Divide(left, right);
        case '%': return new Modulus(left, right);
        case '^': return new Exponent(left, right);
        case '<': return new Min(left, right);
        case '>': return new Max(left, right);
        case '&': return new Average(left, right);
        default: throw string("Unknown operator");
    }
}
