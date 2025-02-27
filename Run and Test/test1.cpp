#include <iostream>
using namespace std;
struct Element{
    int data;
    Element* next{};
};

int main(){
    Element trooper1 = { 1, nullptr};
    Element trooper2 = { 2, nullptr};
    Element trooper3 = { 3, nullptr};
    Element* cursor = &trooper3; // point to trooper 3

    cout << cursor->data << endl;
    cursor = cursor->next;
    cout << cursor->data << endl;
    return 0;
}

