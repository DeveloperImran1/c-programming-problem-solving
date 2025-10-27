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

    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d ", myArr[i]);
        }
    }

    return 0;
}