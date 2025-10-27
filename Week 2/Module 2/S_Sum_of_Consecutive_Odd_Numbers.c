#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    for (int a = 1; a <= n; a++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        if (x < y)
        {
            int sum = 0;
            for (x = x + 1; x < y; x++)
            {
                if (x % 2 == 1)
                {
                    sum = sum + x;
                }
            }
            printf("%d\n", sum);
        }
        else
        {
            int sum = 0;
            for (y = y + 1; y < x; y++)
            {
                if (y % 2 == 1)
                {
                    sum = sum + y;
                }
            }
            printf("%d\n", sum);
        }
    }

    return 0;
}