#include <iostream>
#include <cstdio>
#include <cstdint>

    struct character {
        uint64_t a;
        char b[256];
        bool c;
    };

    int main() {
         character alien{ 42, "Hello", true};
         printf("%d", alien.c);
    }