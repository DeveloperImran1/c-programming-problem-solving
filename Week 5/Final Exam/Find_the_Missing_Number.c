#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        long long int n;
        int a, b, c;
        scanf("%lld %d %d %d", &n, &a, &b, &c);

        long long int result;
        if (n % (a * b * c) == 0)
        {
            result = n / (a * b * c);
        }
        else
        {
            result = -1;
        }

        printf("%lld\n", result);
    }

    return 0;
}