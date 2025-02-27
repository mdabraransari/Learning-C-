#include <cstdio>
#include <iostream>
using namespace std;
static int rat_things_power = 200;
void power_up_rat_thing(int nuclear_isotopes)
{
    rat_things_power = rat_things_power + nuclear_isotopes;
    const auto waste_heat = rat_things_power * 20;
    if (waste_heat > 1000)
    {
        printf("Warning! Very Hot\n-");
    }
}

int main()
{
    int num;
    printf("Rat-thing power: %d\n", rat_things_power);
    cout << "Enter nuclear isotopes:" << endl;
    cin >> num;
    power_up_rat_thing(num);
}