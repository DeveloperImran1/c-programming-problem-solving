#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int devided_by2 = 0;
    int devided_by3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 == 0)
        {
            devided_by2++;
        }
        else if (nums[i] % 3 == 0)
        {
            devided_by3++;
        }
    }

    printf("%d %d", devided_by2, devided_by3);
    return 0;
}