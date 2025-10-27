#include <stdio.h>
int main()
{
    // Basic syntax
    // int myArr[5];
    // myArr[1] = 24;
    // myArr[2] = 44;

    // printf("%d", myArr[1]);

    // array with loop
    // int myArr[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &myArr[i]);
    //     printf("%d ", myArr[i]);
    // }

    // Array initialization
    // int myArr[5] = {1, 2, 3, 4, 5};  // aivabe fixed length er array initialize kora jai.

    // int myArr[] = {1, 2, 3, 4, 5}; // aivabe unlimited length er array initialize kora jai. Jokhon amader need porbe akadhik element thakte pare, length fixed na, tokhon ai way follow korbo.

    // int myArr[] = {0}; // Output: 0 1 11041632 0 4199367  --> ai array ke print korle 1st index er value ta 0 set hobe. But porer akadhik index count korbe and garbege value set korbe.

    int myArr[5] = {0}; // Output: 0 0 0 0 0 --> ai array ke print korle all index er value 0 set hobe. But myArr[n] length er number ta jodi user theke input nia set kori, tahole aita kaj korbena.

      for (int i = 0; i < 5; i++)
    {
        printf("%d ", myArr[i]);
    }

    return 0;
}