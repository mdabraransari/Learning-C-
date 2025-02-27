#include <cstdio>
void read_from(char* array, int index){
    int size = sizeof(array) / sizeof(char);
    if (index <= size && index >= 0)
    {
        printf("Index %d of array, holds '%c'\n", index, array[index]);
    }
    else printf("Out of bounds!\n");
    
}
void write_to( char* array , int index, char character){
    int size = sizeof(array) / sizeof(char);
    if (index <= size && index >= 0){
        array[index] = character;
        printf("Array: %s", array);
    }
    else printf("\nOut of bounds");
   
    
}

 int main(){
    char lower[] = "abc?e";
    char upper[] = "ABC?E";
    char* upper_ptr = upper;

    lower[3] = 'd';
    upper_ptr[3] =  'D';

    char letter_d = lower[3];
    char letter_D = upper_ptr[3];
    // ------- 
    read_from(lower, 3);
    write_to(upper, 2 , 'F');
 }