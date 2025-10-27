#include <stdio.h>
#include <string.h>
int main()
{
    // char s[101]; // aikhane questin a jodi bola thake, 100 charecter er string hote pare, tahole array er length 1 besi nita hobe. Karon string er last index a null value rakhe. Ar ai null value ke '\0' aivabe rakhe.

    // // let strig er moddhe kono space thakbena. Tai scanf() use kortesi.
    // scanf("%s", s);

    // // input theke pawa string er length ta ber korbo.
    // int count = 0;
    // for (int i = 0; s[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // // printf("%d", count);

    // upore manualy length ber korlam. But strlen() built in method er maddhome easily string er length ber kora jai.
    char input[101];
    scanf("%s", input);

    int size = strlen(input);
    printf("%d", size);
    return 0;
}