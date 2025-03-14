#include <cstdio>

struct ClockOfTheLongNow
{
    // CONSTRUCTOR 
    ClockOfTheLongNow()
    {
        year = 2019;
    }

    void add_year()
    {
        year++;
    }
    bool set_year(int new_year)
    {
        if (new_year < 2019)
            return false;
        this->year = new_year;
        return true;
    }
    int get_year()
    {
        return year;
    }

private:
    int year;
};

int main(){
    ClockOfTheLongNow clock;
    ClockOfTheLongNow* clock_ptr = &clock;
    clock_ptr->set_year(2020);
    printf("Address of clock: %p\n", clock_ptr);
    printf("Value of clock's year: %d\n", clock_ptr->get_year());
    printf("Add year: %d\n", (*clock_ptr).get_year());
}