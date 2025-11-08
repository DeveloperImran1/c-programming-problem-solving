#include <stdio.h>

void odd_even()
{

    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 == 0)
        {
            even_count++;
        }
        else if (nums[i] % 2 == 1)
        {
            odd_count++;
        }
    }

    printf("%d %d", even_count, odd_count);
}

int main()
{

    odd_even();

    return 0;
}