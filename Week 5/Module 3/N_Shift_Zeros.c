#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{

    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int i = 0;
    int count = 0;
    while (i < n)
    {
        if (nums[i] > 0)
        {
            printf("%d ", nums[i]);
            count++;
        }
        i++;
    }

    int extra_loop = n - count;

    for (int i = 0; i < extra_loop; i++)
    {
        printf("%d ", 0);
    }

    return 0;
}