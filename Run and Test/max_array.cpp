#include <cstddef>
#include <cstdio>

int main(){
  /* unsigned long maximum = 0;
   unsigned long values[] = {10, 50, 20, 40, 90 };
   for(size_t i=0; i < 5; i++){
    if(values[i] > maximum) maximum = values[i];
   }
   printf("The maximum value is %lu", maximum);*/


   // range-based 
  unsigned long maximum = 0;
  unsigned long values[] = { 10 , 20, 30, 40, 50};
  for(unsigned long value: values){
   if (value > maximum) maximum = value; 
  }
  printf("The maximum value is %lu.", maximum);


}