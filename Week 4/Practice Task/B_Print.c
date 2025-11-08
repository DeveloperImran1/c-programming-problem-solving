#include <stdio.h>

int printAll(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i + 1 == n)
        {
            printf("%d", i + 1);
        }
        else
        {
            printf("%d ", i + 1);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    printAll(n);

    return 0;
}