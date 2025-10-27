#include <stdio.h>
int main()
{

    // increment or decrement 2 dhoroner. 1. pre-increment 2. post-increment
    // Ex: 1
    // int a = 10;
    // int b = a++; // aikhane akta variable er pore ++ use koresi. Jake post increment bole. Jeita age main kaj korbe, tarpor increment hobe. I mean age a variable er value b te store hobe, thene a++ hoia a er value 11 hobe.
    // printf("%d %d", a, b);  // Output: 11 10

    // Ex: 2
    // int a = 10;
    // int b = ++a;           // aikhane akta variable er pore ++ use koresi. Jake pre increment bole. Jeita age increment er kaj korbe, tarpor main kaj hobe. I mean age a variable er value bare 11 hobe, then a er value b te set hobe.
    // printf("%d %d", a, b); // Output: 11 11

    // Ex: 3
    // int x = 10;
    // int y = x++;
    // int z = ++y;
    // printf("%d\n", z++); // Output: 11
    // printf("%d", z);     // Output: 12

    // Ex: 4
    int x = 10;
    --x;
    printf("%d\n", x--); // Output: 9
    printf("%d", x);     // Output: 8

    return 0;
}