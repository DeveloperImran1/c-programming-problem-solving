#include <stdio.h>
#include <stdio.h>
int main()
{
    char sentence[1001];
    scanf("%s", sentence);

    int length = strlen(sentence);
    char result[4] = "YES";
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        if (sentence[i] != sentence[j])
        {
            result[0] = 'N';
            result[1] = 'O';
            result[2] = '\0';
            break;
        }
    }
    printf("%s", result);

    return 0;
}