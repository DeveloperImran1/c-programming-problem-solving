#include <stdio.h>

long long int factorial(int n, long long int i)
{
    if (i > n)
    {
        return i - 1;
    }
    long long int current_fact = factorial(n, i + 1);

    if ((i - 1) > 0)
    {
        return current_fact * (i - 1);
    }
    else
    {
        return current_fact;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int result = factorial(n, 1);
    printf("%lld", result);
    return 0;
}