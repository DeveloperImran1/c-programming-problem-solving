#include <stdio.h>
int main()
{
    int a = 10;
    printf("%d\n", a); // kono variable ke print korar jonno oi data type er format specifier use kori ar variable name dita hoi.

    printf("%p\n", &a); // Output: 000000000061FE1C --> aikhane 61FE1C holo a variable ke memory te jei jaigai store kora hoiase, sei jaigar ba location er name ta  hexadecimal value te output dei. Ar kono variable er memory location ber korar jonno format specifier hisabe %p use kora hoi and variable er age & symboll dita hobee.

    // Pointer variable --> kono variable er location ke jei variable er moddhe rakha hoi, take pointer variable bole.

    // data_type * variable_name  --> pointer variable declare korar syntax. Aikhane jei variable er location store korbo. sei variable er type ta use hobe, pointer variable er type hisabe. Tarpor * symbol dia pointer variable er akta name dita hobe.

    int *pointer_var;
    pointer_var = &a;            // pointer_var er moddhe a variable er location store korar jonno &main_var_name dita hobe.
    printf("%p\n", pointer_var); // Output: 000000000061FE14

    // Sokol dhoroner variable er ee akta kore memory storage nia thake. Thik temoni pointer variable oo abar memory er kono na kono location a store hoi. Sei location ke nicher niom a dekha jai.
    printf("%p\n", &pointer_var); // Output: 000000000061FE10

    return 0;
}