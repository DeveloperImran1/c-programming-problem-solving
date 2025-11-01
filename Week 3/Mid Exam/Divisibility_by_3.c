#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    char nums[n];
    scanf("%s", &nums);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (nums[i] - 48);
    }

    if (sum % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}