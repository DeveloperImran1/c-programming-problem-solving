#include <stdio.h>
int main()
{
    int a = 10;
    printf("%d\n", a);

    printf("%p\n", &a);

    int *pointer_var;
    pointer_var = &a;
    printf("%p\n", pointer_var); // Output: 000000000061FE14  --> aita holo a er location print korese. Ai a er location ta pointer_var er moddhe store kora hoiase.

    printf("%d\n", *pointer_var); // Output: 10  --> aikhane pointer_var er moddhe jei location address ta store ase. Sei location a jei value ase, seita print hobe. Kono akta int print korar motoi same. But sudho variable name er age * dita hobe.

    // Dereference --> Kono akta variable er value pointer er maddhome change korake dereference kora bole.
    *pointer_var = 50;            // *pointer_var aita datra a ke access kora jai. Ar take jokhon new value set kore dewa hoi, tokhon a er valuee update hoia jai.
    printf("%d\n", *pointer_var); // Output: 50
    printf("%d\n", a);            // Output: 50

    // Reference:
    int b;
    scanf("%d", &b); // Atodin amra scanf() a variable er age ampersent(&) symboll use koresi. But aita use korar reason jantamna. Akta valu ke, kono variable a store kortesi. Jake bole reference kora. Ar reference korar somoi ampersent(&) symboll use kora hoi. shortly: value to location --> Reference.
    printf("%d", b); // Location to value --> aitake bole dereference. Location ke use kore value get kortesi.

    return 0;
}