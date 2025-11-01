#include <stdio.h>
int main()
{
    // Logic steps:
    // 1. string input nilam
    // 2. new akta empty array nibo 27 length er. Ex: count_letters name a.
    // 3. Array er moddhe charecter er ASCII value er decimal - 97 insert korbo serialy
    // 4. amon akta array hobe, jar 0 number index hobe a er count, 1 number index hobe b er count...
    // 5. then

    char mySentence[10000001];
    scanf("%s", &mySentence);

    int count_letters[26] = {0};

    for (int i = 0; mySentence[i] != '\0'; i++)
    {
        int decimal_value = mySentence[i] - 97;
        count_letters[decimal_value]++;
        // printf("%d ", decimal_value);
    }

    for (int i = 0; i < 26; i++)
    {
        if (count_letters[i])
        {
            printf("%c : %d\n", i + 97, count_letters[i]);
        }
    }

    return 0;
}