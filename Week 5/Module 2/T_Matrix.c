#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int my2dArr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &my2dArr[i][j]);
        }
    }

    int primary_diagonal_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primary_diagonal_sum += my2dArr[i][j];
            }
        }
    }

    long long int secondary_diagonal_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                secondary_diagonal_sum += my2dArr[i][j];
            }
        }
    }

    if (primary_diagonal_sum < secondary_diagonal_sum)
    {
        long long int result = secondary_diagonal_sum - primary_diagonal_sum;
        printf("%d", result);
    }
    else
    {
        long long int result = primary_diagonal_sum - secondary_diagonal_sum;
        printf("%d", result);
    }

    return 0;
}