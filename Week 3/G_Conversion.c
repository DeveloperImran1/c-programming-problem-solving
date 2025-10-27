#include <stdio.h>
#include <string.h>
int main()
{
    char sentence[1000000];
    fgets(sentence, 1000000, stdin);

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == ',')
        {
            printf(" ");
        }
        else if (sentence[i] > 64 && sentence[i] < 91)
        {
            printf("%c", sentence[i] + 32);
        }
        else if (sentence[i] > 96 && sentence[i] < 123)
        {
            printf("%c", sentence[i] - 32);
        }
    }

    return 0;
}