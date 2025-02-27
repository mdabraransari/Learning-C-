#include <iostream>
using namespace std;
constexpr double square(double x){
    return x*x;
}
int main(){
    const int dmv = 17;
    int var = 17;
    //constexpr double max1 = 1.4*square(dmv);
    
    cout << square(1.2);

    
}