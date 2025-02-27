#include <iostream>
using namespace std;


int check_num( int n){
    if(n > 0) return 1;
    else if (n < 0) return -1;
    else return 0;
}

int main() {
   cout <<  check_num(3);
   return 0;
}