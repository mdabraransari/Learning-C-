#include <cstdio>

struct College
{
    char name[256];

};
void print_name(College* college_ptr)
{
    printf("%s College\n", college_ptr->name);
}
int main() {
    College  best_colleges[] = { "IIT", "Chapra", "AMU"};
    print_name(best_colleges);
    // int key[] {3, 4, 5};
    // int* key_ptr = key;
    // printf("%d", key_ptr);
    // points to 3 



}