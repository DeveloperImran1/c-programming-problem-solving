#include <stdio.h>
#include <string.h>

int main()
{
    // Input: Orange Apple
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    // Way 1:
    // int len = strlen(b);

    // for (int i = 0; i <= len; i++)
    // {
    //     a[i] = b[i];
    // }

    // way 2: using built in method
    strcpy(a, b);

    printf("%s %s", a, b); // Output: Apple Apple
    return 0;
}