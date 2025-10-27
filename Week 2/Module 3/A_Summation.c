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

    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum += myArr[i];
    }

    if (sum < 0)
    {
        printf("%lld", sum * -1);
    }
    else
    {
        printf("%lld", sum);
    }
    return 0;
}