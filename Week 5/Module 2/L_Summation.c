#include <stdio.h>

void sum_of_all_num(int nums[], int n)
{
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }

    printf("%lld", sum);
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

    sum_of_all_num(nums, n);

    return 0;
}