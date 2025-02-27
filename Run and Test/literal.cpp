#include <cstdio>
int main(){
    unsigned short e = 0b10101010;
    printf("%hu\n", e);
    int c = 0123;
    printf("%d\n",c);
    unsigned long long d = 0xFFFFFFFFFFFFFFFF;
    printf("%llu\n", d);
    // to print interger in the form of hexadecimal and octal
    unsigned int a = 3669732608;
    printf("Yabba %x!\n", a);
    unsigned int b = 69;
    printf("There are %u , %o leaves here.\n", b,b);

}