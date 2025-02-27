// Create an enum class Operation that has values Add, Subtract, Multiply,and Divide

#include <cstdio>

enum class Operation
{
    Add,
    Subtract,
    Multiply,
    Divide
};

int main()
{
    int x = 3;
    int y = 4;
    Operation cal = Operation::Multiply;

    switch (cal)
    {
    case Operation::Add:
    {
        printf("%d\n", x + y);
    }
    break;
    case Operation::Subtract:
    {
        printf("%d\n", x - y);
    }
    break;

    case Operation::Multiply:
    {
        printf("%d\n", x * y);
    }
    break;
    case Operation::Divide:
    {
        printf("%d\n", x  / y);
    }
    break;
    default:
    {
        printf("error\n");
    }
        break;
    }
}
