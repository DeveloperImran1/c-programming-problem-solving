#include <stdio.h>
#include <string.h>

int main()
{
    // Input: Orange Apple
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    // Way 1:
    // int len = strlen(a);
    // int len_of_b = strlen(b);

    // for (int i = 0; i <= len_of_b; i++)
    // {
    //     a[len + i] = b[i];
    // }

    // Way 2: using built in function
    strcat(a, b);

    printf("%s", a); // Output: Apple Apple
    return 0;
}