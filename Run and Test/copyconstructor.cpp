#include <iostream>
using namespace std;

struct student
{


    student(string n, int a)
    {
        name = n;
        age = a;
    }
    //copy constructor 
    student(const student& s){
        name = s.name;
        age = s.age;
        cout << "copy constructor invoked:"<< endl;
    }
    void display(){
        cout << "Name:" << name << ", Age:"<< age <<endl;
    }
public:
    string name;
    int age;
};
int main() {
    student a1("Abrar", 19);
    a1.display();
    student a2 = a1;
    a2.display();
}