#include <stdio.h>

void myFun(int x)
{
    x = 20;
}
int main()
{
    int x = 10;
    printf("%d\n", x); // Output: 10

    myFun(x); // myFun() function er moddhe x er value ta pass koresi, jar fole myFun er moddhe x er value reassign korlew main()  er moddhe x er value change hoini. Aitakei pass by value bole.

    printf("%d\n", x); // Output: 10

    return 0;
}