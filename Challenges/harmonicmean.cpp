#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    printf("---Hrmonic Mean Calculator---\n");
    float num[5], reciprocals[5];
    float sum = 0;
    printf("Enter five Numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &num[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (num[i] != 0)
        {
            reciprocals[i] = 1 / num[i];
        }
        else
        {
            reciprocals[i] = 0;
        }
    }
    printf("Reciprocals are:\n");
    for (int i = 0; i < 5; i++)
    {
        if (num[i] != 0)
        {
            printf("%.2f\n", reciprocals[i]);
        }
        else
        {
            printf("Reciprocal of zero is undefined\n");
        }
    }
    for (size_t i = 0; i < 5; i++)
    {
        sum += reciprocals[i];
    }
    float harmonic_mean = 5 / sum;
    printf("Harmonic Mean of the numbers is: %.2f\n", harmonic_mean);
    return 0;
}
