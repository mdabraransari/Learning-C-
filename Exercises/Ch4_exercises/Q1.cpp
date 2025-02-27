// Create a struct TimerClass. In its constructor, record the current time in a field called timestamp
#include <chrono>
#include <iostream>

struct TimerClass
{
    std::chrono::system_clock::time_point timestamp;

    TimerClass()
    {
        timestamp = std::chrono::system_clock::now();
    }
};
int main()
{
    TimerClass timer;
    std::time_t time = std::chrono::system_clock::to_time_t(timer.timestamp);
    std::cout << std::ctime(&time);
    return 0;
}