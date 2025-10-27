#include <stdio.h>
#include <string.h>

int main()
{
    char first_word[11], second_word[11];
    scanf("%s %s", &first_word, &second_word);
    printf("%d %d\n", strlen(first_word), strlen(second_word));
    printf("%s%s\n", first_word, second_word);

    for (int i = 0; first_word[i] != '\0'; i++)
    {
        if (i == 0)
        {
            printf("%c", second_word[i]);
        }
        else
        {
            printf("%c", first_word[i]);
        }
    }

    for (int i = 0; second_word[i] != '\0'; i++)
    {
        if (i == 0)
        {
            printf(" %c", first_word[i]);
        }
        else
        {
            printf("%c", second_word[i]);
        }
    }

    return 0;
}