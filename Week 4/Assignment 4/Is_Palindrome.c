#include <stdio.h>
#include <string.h>

int is_palindrome(char sentence[])
{

    int result = 1;
    char new_sentence[1001];
    int stringLen = strlen(sentence);

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        new_sentence[i] = sentence[stringLen - 1];
        stringLen--;
    }

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (new_sentence[i] != sentence[i])
        {
            result = 0;
        }
    }
    return result;
}

int main()
{

    char sentence[1001];
    scanf("%s", sentence);

    int result = is_palindrome(sentence);

    if (result == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}