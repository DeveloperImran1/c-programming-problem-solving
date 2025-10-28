#include <stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s", &a);

    for (int i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }

    printf("%s %s", a, b);

    return 0;
}