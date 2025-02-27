#include <cstdio>
struct ClockOfTheLongNow
{
    // CONSTRUCTOR 
    ClockOfTheLongNow()
    {
        year = 2019;
    }
    ClockOfTheLongNow(int new_year)
    {
        year = new_year;
    }

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
    int get_year() const
    {
        return year;
    }

private:
    int year;
};
struct Avout
{
    Avout(const char* name, long year_of_apert)
    : name { name } , apert { year_of_apert } {
    }
    void announce() const{
        printf("My name is %s and my next apert is %d.\n", name, apert.get_year());
    }
    const char* name;
    ClockOfTheLongNow apert;

};
int main() {
  Avout Abrar{"Abrar", 3010};
  Avout Ayan{"Ayan", 4000};
  Abrar.announce();
  Ayan.announce();

}