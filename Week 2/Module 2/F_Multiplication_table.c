#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    for (int i = 1; i <= 12; i++)
    {
        int mul = i * x;
        printf("%d * %d = %d\n", x, i, mul);
    }
    return 0;
}