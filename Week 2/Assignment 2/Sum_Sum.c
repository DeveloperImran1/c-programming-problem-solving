#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int myArr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myArr[i]);
    }

    int positive_sum = 0;
    int negative_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (myArr[i] > 0)
        {
            positive_sum = positive_sum + myArr[i];
        }
        else if (myArr[i] < 0)
        {
            negative_sum = negative_sum + myArr[i];
        }
    }

    printf("%d %d", positive_sum, negative_sum);
    return 0;
}