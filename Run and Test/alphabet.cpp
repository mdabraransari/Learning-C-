#include <cstdio>
int main()
{

   char alphabet[27];
   for (int i = 0; i < 26; i++)
   {
      alphabet[i] = i + 97;
   }
   alphabet[25] = 0;
   printf("%s\n", alphabet);
   for (int i = 0; i < 26; i++)
   {
      alphabet[i] = i + 65;
   }
   printf("%s", alphabet);

   //    char alphabet[3];
   //    alphabet[0] = 97;
   //    printf("%c", alphabet[0]);
}