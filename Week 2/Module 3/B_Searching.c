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

    int x;
    scanf("%d", &x);

    int result = -1;
    for (int i = 0; i < n; i++)
    {
        if (myArr[i] == x)
        {
            result = i;
            break;
        }
    }

    printf("%d", result);

    return 0;
}