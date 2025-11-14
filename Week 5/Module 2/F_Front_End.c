#include <stdio.h>

// void sum_of_all_num(int nums[], int n)
// {
//     long long int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += nums[i];
//     }

//     printf("%lld", sum);
// }
int main()
{
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int j = n - 1;
    for (int i = 0; i < j; i++, j--)
    {
        printf("%d %d ", nums[i], nums[j]);
    }

    if (n % 2 == 1)
    {
        printf("%d ", nums[j]);
    }

    return 0;
}