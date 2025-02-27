#include <cstdio>
// Create a struct Calculator. It should have a single constructor that takes an Operation.
enum class Operation
{
    Add,
    Subtract,
    Multiply,
    Divide
};
struct Calculator
{

    Calculator(Operation op_in)
    {
        op = op_in;
    }
    int calculate(int a, int b)
    {
        switch (op)
        {
        case Operation::Add:
            return a + b;
            break;
        case Operation::Subtract:
            return a - b;
            break;
        case Operation::Multiply:
            return a * b;
            break;
        case Operation::Divide:
            return a / b;
            break;

        default:
            break;
        }
        return 0;
    }
    Operation op;
};
int main()
{
    Calculator add_calc(Operation::Add);
    printf("1 + 2 = %d\n", add_calc.calculate(1, 2));
    Calculator div_calc(Operation::Divide);
    printf("100 / 33 = %d\n", div_calc.calculate(100, 33));
}