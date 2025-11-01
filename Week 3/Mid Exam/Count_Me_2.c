#include <stdio.h>
int main()
{
    char myStr[100001];
    scanf("%s", &myStr);

    int count = 0;

    int i = 0;
    while (myStr[i] != '\0')
    {
        i++;
        if (myStr[i] == 'a' || myStr[i] == 'e' || myStr[i] == 'i' || myStr[i] == 'o' || myStr[i] == 'u')
        {
            continue;
        }
        count++;
    }

    printf("%d", count);
    return 0;
}