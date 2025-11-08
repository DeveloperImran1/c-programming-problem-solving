#include <stdio.h>

// jokhon kono akta function kono kiso return korena, tokhon function er type hisabe void likha dita hoi. Jar fole return keyword dia kono kiso return korlew, seita asole return korbena.
void sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result = a + b;
    // return; // function er type void tahole, aikhane return keyword use kora jabe?? Yes jabe. But aita kono value return korbena. Ai return ta sudho loop er moddhe break er moto kaj korbe. aikhan theke return hoia jabe, nicher line gulo exicute korbena.
    printf("%d", result);
}
int main()
{

    sum(10, 20);
    return 0;
}
