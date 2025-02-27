#include <time.h>
#include <iostream>

struct TimerClass
{
     time_t timestamp;
    //  Uses time_t which is typically just a long integer (number of seconds since January 1, 1970)
     TimerClass(){
        timestamp = time(NULL);
        // Uses the simple time(NULL) function to get current time instead of chrono namespace syntax
     }
};

int main(){
    TimerClass timer;
    std::cout << "Timestamp:" << timer.timestamp << std::endl;
    //In readable form
    char* readable_time = ctime(&timer.timestamp);
    std::cout << "Readable time:" << readable_time;
}
