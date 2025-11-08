#include <stdio.h>

int count_before_one(int nums[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 1)
        {
            count++;
        }
        else if (nums[i] == 1)
        {
            break;
        }
    }

    return count;
}

int main()
{
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("%d", count_before_one(nums, n));

    return 0;
}