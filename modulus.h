class Modulus : public SubExpression {
public:
    Modulus(Expression* left, Expression* right) : SubExpression(left, right) {}
    double evaluate() {
        return static_cast<int>(left->evaluate()) % static_cast<int>(right->evaluate());
    }
};