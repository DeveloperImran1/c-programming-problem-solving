#include <stdio.h>

// aikhane myFun() er perameter a dataType int niasi. Karon main function er moddhe theke myFun() ke call korar somoi je variable er location pathassi, sei variable int type er. Ar variable name er age * symbold dia case kortesi, mane aita akta pointer variable.
void myFun(int *p)
{
    *p = 20; // Kono akta pointer variable er value change korar jonno variableName er age * symboll dita hoi. Tahole oi location a jei value set ase, Sei value change hoia jai.
}
int main()
{
    int x = 10;
    printf("%d\n", x); // Output: 10

    myFun(&x); // myFun() function er moddhe x er value ta pass korar somoi &x aivabe pass kortesi. Aikhane &x er mane holo, x er location ke mean kortese. so perameter a amra x er location ke send kortesi, x er value ke noi.

    printf("%d\n", x); // Output: 20

    return 0;
}