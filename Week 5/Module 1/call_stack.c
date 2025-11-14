

#include <stdio.h>

void mello()
{
    printf("Mello\n");
}
void gello()
{
    printf("Gello\n");
    mello();
}
void hello()
{
    printf("Hello\n");
    gello();
}

// Call stack, chair er stack er moto kaj kore. akta chair er upor arekta chair rakha hoi. Next chair sobar upore rakha hoi. Abar jokhon char ke ber korte hoi, tokhon sobar uporer chair 1st a ber korte hoi. Thats mean sobar last a jei chair add hoi, sei chair sobar age ber hoi.
int main()
{
    printf("Hi\n");
    hello();

    // Output:
    // Hi
    // Hello
    // Gello
    // Mello
    return 0;
}