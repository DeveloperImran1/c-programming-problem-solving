#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int x = 1; x <= n; x++)
    {
        int num;
        scanf("%d", &num);

        if (num <= 0)
        {
            printf("1\n");
        }
        else
        {
            long long int factorial = 1;
            for (int i = 1; num >= i; num--)
            {
                factorial = factorial * num;
            }
            printf("%lld\n", factorial);
        }
    }

    return 0;
}