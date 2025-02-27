#include <iostream>
using namespace std;

// int main() {
//     int x = 6;
//     int* p = &x;
//     cout << p;
//    return 0;
// }
int count_x(char*p , char x)
// count the number of occurence of x in p[]
// p is assumed to point to a zero-terminated array of char(or to nothing)
{
    if (p==nullptr) return 0;
    int count = 0;
    for(; *p!= 0; ++p)
        if(*p==x)
          ++count;
    return count;
}
