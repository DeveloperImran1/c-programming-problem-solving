#include <stdio.h>
int main()
{
    int myArr[5];
    // printf("%d", sizeof(int)); // Output: 4  --> kono data type ke sizeof() dia print korle, sei data type total koto byte memory nei, ta show korbe. Aikhane int 4 byte memory store kore.
    // printf("%d", sizeof(myArr));   // Output: 20  --> kono akta variable total koto byte storage nissa. Tao dekha jai sizeof() er maddhome.

    printf("%d", sizeof(myArr) / sizeof(int)); // Output: 5 --> Thats mean 20/4 = 5 tarmane akta array te koita charecter ase, ta ber korte pari ai line er maddhome.
    return 0;
}