#include <stdio.h>
int main()
{
    int x;
    long long int y;
    scanf("%d %lld", &x, &y);

    int sum = x + y;
    long long int mul = x * y;
    int sub = x - y;

    printf("%d + %lld = %d\n", x, y, sum);
    printf("%d * %lld = %lld\n", x, y, mul);
    printf("%d - %lld = %d", x, y, sub);

    return 0;
}