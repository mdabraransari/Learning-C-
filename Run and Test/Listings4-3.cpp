#include <cstdio>
void power_up_rat_thing(int nulclear_isotopes){
    static thread_local  int rat_thing_power = 200;
    rat_thing_power = rat_thing_power + nulclear_isotopes;
     const auto waste_heat = rat_thing_power * 20;
     if (waste_heat > 10000)
     {
        printf("Warning! Hot doggie!\n");
     }
     printf("Rat-thing power: %d\n", rat_thing_power);
}
 int main(){
    // int num;
    // printf("Enter Nuclear Isotopes:");
    // scanf("%d",&num);
    // power_up_rat_thing(num);
    power_up_rat_thing(500);
    power_up_rat_thing(600);
    power_up_rat_thing(900);
    power_up_rat_thing(200);
    power_up_rat_thing(800);
    power_up_rat_thing(3600);
    power_up_rat_thing(9200);
    power_up_rat_thing(100);

 }