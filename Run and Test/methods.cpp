#include <cstdio>

// struct ClockOfTheLongNow
// {
//     void add_year(){
//         year++;
//     }
//     int year;
// };

// int main() {
//     ClockOfTheLongNow clock;
//     clock.year = 2025;
//     clock.add_year();
//     printf("year: %d\n", clock.year);
//     clock.add_year();
//     printf("year: %d\n", clock.year);
// }
struct ClockOfTheLongNow
{
    // CONSTRUCTOR 
    // ClockOfTheLongNow()
    // {
    //     year = 2019;
    // }

    void add_year()
    {
        year++;
    }
    bool set_year(int new_year)
    {
        if (new_year < 2019)
            return false;
        year = new_year;
        return true;
    }
    int get_year()
    {
        return year;
    }

private:
    int year;
};

int main()
{
    ClockOfTheLongNow clock;
    if (!clock.set_year(2018))
    {
        clock.set_year(2019);
    }
    clock.add_year();
    printf("year: %d\n", clock.get_year());






    // ClockOfTheLongNow clock;
    // printf("%d", clock.get_year());




}