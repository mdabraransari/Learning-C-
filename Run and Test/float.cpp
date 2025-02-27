#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double plancks_constant = 6.62607004e-34;
    printf("%lf\n", plancks_constant);

    double an = 6.0221409e23;
    printf("Avogadro's Number: %le %lf %lg\n", an, an, an);
    float hp = 9.75;
    printf("Hogwarts' Platform: %e %f %g\n", hp, hp, hp);

    return 0;
}