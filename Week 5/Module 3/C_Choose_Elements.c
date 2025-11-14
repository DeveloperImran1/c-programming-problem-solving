#include <stdio.h>
#include <math.h>

int main()
{

    int n, k;
    scanf("%d %d", &n, &k);

    long long int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &nums[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] < nums[j])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%lld ", nums[i]);
    // }

    long long int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += nums[i];
    }

    printf("%lld ", sum);

    return 0;
}