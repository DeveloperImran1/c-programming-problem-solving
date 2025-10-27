#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int myArr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &myArr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (myArr[i] <= 10)
        {
            printf("A[%d] = %d\n", i, myArr[i]);
        }
    }

    return 0;
}