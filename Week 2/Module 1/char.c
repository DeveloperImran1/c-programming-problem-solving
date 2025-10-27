#include <stdio.h>
int main()
{

    char letter;
    scanf("%c", &letter);

    if (letter >= 'A' && letter <= 'Z')
    {
        printf("%c", letter + 32);
    }
    else
    {
        printf("%c", letter - 32);
    }

    return 0;
}