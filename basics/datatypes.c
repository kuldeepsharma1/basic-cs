#include <stdio.h>
#include <stdbool.h>  // For using bool type

int main() {
    // Integer types
    int i = 100;                  // Regular integer
    short s = 10;                 // Short integer
    long l = 100000L;             // Long integer
    long long ll = 10000000000LL; // Long long integer

    // Unsigned integer types
    unsigned int ui = 200;       // Unsigned integer
    unsigned short us = 50;      // Unsigned short integer
    unsigned long ul = 200000L;  // Unsigned long integer
    unsigned long long ull = 100000000000ULL; // Unsigned long long integer

    // Floating point types
    float f = 3.14f;             // Float
    double d = 3.1415926535;     // Double
    long double ld = 3.141592653589793; // Long double

    // Character type
    char c = 'A';                // Character

    // Boolean type (using stdbool.h)
    bool b = true;               // Boolean (true or false)

  

    // Printing values of all data types
    printf("Integer (int): %d\n", i);
    printf("Short (short): %d\n", s);
    printf("Long (long): %ld\n", l);
    printf("Long Long (long long): %lld\n", ll);

    printf("Unsigned Integer (unsigned int): %u\n", ui);
    printf("Unsigned Short (unsigned short): %u\n", us);
    printf("Unsigned Long (unsigned long): %lu\n", ul);
    printf("Unsigned Long Long (unsigned long long): %llu\n", ull);

    printf("Float (float): %.2f\n", f);
    printf("Double (double): %.10f\n", d);
    printf("Long Double (long double): %.15Lf\n", ld);

    printf("Character (char): %c\n", c);

    printf("Boolean (bool): %s\n", b ? "true" : "false");

  

    return 0;
}
