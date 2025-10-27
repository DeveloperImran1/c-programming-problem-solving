#include <stdio.h>
#include <string.h>

int main()
{
    char s[10000001]; // question a bole dewa ase, string er size 10^6 hote pare. Tai 10 er por 6 ta zero dita hobe. But string er last a null value set korar jonno akta index besi nita hoi. So 10000000 + 1 = 10000001 niasi.
    fgets(s, 10000001, stdin);

    for (int i = 0; i <= 10000001; i++)
    {
        if (s[i] == '\\')
        {
            break;
        }
        else
        {
            printf("%c", s[i]);
        }
    }

    return 0;
}