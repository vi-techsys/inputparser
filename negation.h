class Negation : public SubExpression {
public:
    Negation(Expression* left) : SubExpression(left, nullptr) {}
    double evaluate() {
        return -left->evaluate();
    }
};