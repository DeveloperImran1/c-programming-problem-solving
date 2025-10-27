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
        if (myArr[i] > 0)
        {
            myArr[i] = 1;
        }
        else if (myArr[i] < 0)
        {
            myArr[i] = 2;
        }
        else
        {
            myArr[i] = 0;
        }

        printf("%d ", myArr[i]);
    }

    return 0;
}