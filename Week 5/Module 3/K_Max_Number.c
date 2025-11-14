#include <stdio.h>
#include <limits.h>

int max_num(int nums[], int n, int current_index)
{

    if (current_index == n)
    {
        return INT_MIN;
    }

    int max_value = max_num(nums, n, current_index + 1);

    if (nums[current_index] > max_value)
    {
        return nums[current_index];
    }
    else
    {
        return max_value;
    }
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

    int max_value = max_num(nums, n, 0);
    printf("%d", max_value);
    return 0;
}