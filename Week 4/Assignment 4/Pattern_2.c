#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int m = n - 1;
    int o = 1;
    int nums[n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = m; j > 0; j--)
        {
            printf(" ");
        }
        m--;

        for (int k = 1; k <= o; k++)
        {
            nums[k - 1] = k;
        }

        for (int i = o - 1; i >= 0; i--)
        {
            printf("%d", nums[i]);
        }

        o++;
        printf("\n");
    }

    return 0;
}