#include <iostream>
#include <cstdio>

using namespace std;

struct taxi
{
    taxi()
    {
        printf("(no argument)\n");
    }
    taxi(char x)
    {
        printf("char: %c\n", x);
    }
    taxi(int x)
    {
        printf("int: %d\n", x);
    }
    taxi(float x)
    {
        printf("float: %f\n", x);
    }
};
int main()
{
    taxi t1;
    taxi t2{'c'};
    taxi t3{6556};
    int a[]{1, 3, 4};
    for (size_t i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        printf("%d\t\n", a[i]);
    }
    int f = {4};
    printf("%d\n", f);
    int g = (56);
    printf("%d", g);
    return 0;
}