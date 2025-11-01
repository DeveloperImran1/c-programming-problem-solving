#include <stdio.h>
int main()
{
    char str[100001];
    scanf("%s", &str);

    char count_str[26] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            int letter_index = str[i] - 97;
            count_str[letter_index]++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            int letter_index = str[i] - 65;
            count_str[letter_index]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (count_str[i] > 0)
        {
            printf("%c - %d\n", i + 97, count_str[i]);
        }
    }

    return 0;
}