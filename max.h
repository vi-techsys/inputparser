class Max : public SubExpression {
public:
    Max(Expression* left, Expression* right) : SubExpression(left, right) {}
    double evaluate() {
        return left->evaluate() > right->evaluate() ? left->evaluate() : right->evaluate();
    }
};