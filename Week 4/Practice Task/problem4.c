#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    scanf("%d", &a);

    if (a > 0)
    {
        printf("%d", (a - (a * 2)));
    }
    else if (a < 0)
    {
        printf("%d", abs(a));
    }
    else
    {
        printf("%d", 0);
    }
    return 0;
}