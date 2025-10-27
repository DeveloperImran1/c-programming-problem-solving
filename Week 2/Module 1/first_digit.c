#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    int first_digit = X / 1000; // amra jani aikhane 4 digit er moddhei kono number asbe. Tai direct 1000 dia devide korlam.
    if (first_digit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}