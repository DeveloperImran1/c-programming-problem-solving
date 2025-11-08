// Explain the calculation of how an array finds its 3rd index. [what will happen if we try to print a[3] ]

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int myArr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myArr[i]);
    }

    printf("%p ", (myArr + 3));
    return 0;
}