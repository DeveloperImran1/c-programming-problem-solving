#include <stdio.h>
int main()
{
    // amra jani akta int variable 4 byte kore space dokhol kore. So jokhon akta array declare kora hoi, tokhon akadhik value thake. Let myArr namer array te 5 ta int type value ase. So amra jani int data type 4 byte kore space nia thake. Tai myArr er every value er location 4ta kore byte niba.
    int myArr[5] = {10, 20, 30, 40};

    // aikhane every element 4 ta kore byte nissa.
    printf("%p\n", &myArr[0]); // Output: 61FE00, 61FE01, 61FE02, 61FE03
    printf("%p\n", &myArr[1]); // Output: 61FE04, ...
    printf("%p\n", &myArr[2]); // Output: 61FE08
    printf("%p\n", &myArr[3]); // Output: 61FE0C
    printf("%p\n", &myArr[4]); // Output: 61FE10

    // But jodi sudho array er name ke location dekhte chai, tahole array er 0 number index jei location a ase, sei location full array ke dekhabe.
    printf("%p\n", &myArr); // Output: 61FE00
    printf("%d\n", *myArr); // Output: 10  --> aikhane dereference kora hoiase. dereference mane kono akta location a ki value ase, sei value ke dhora. Aikhane myArr er main location ta holo: array er 0 number index er location 61FE00 aita. So ai location er value holo myArr[0] er value 10.

    // amra already ager class a dekhesi, dereference kore, new value set kora jai.
    *myArr = 100;
    printf("%d\n", *myArr);       // Output: 100  --> myArr dara 0 number index mean kore. So jokhon direct myArr ke dereference kori. Tokhon array er 0 number index er value change hoi.
    printf("%d\n", *(myArr + 1)); // Output: 20  --> aikhane myArr dara 0 number index ke bujhasse, tar sathe 1 plus korle 1 number index ke point korbe. So output a 20 print korese.

    return 0;
}