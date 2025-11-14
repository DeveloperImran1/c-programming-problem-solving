#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int nums[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &nums[i][j]);
        }
    }

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", nums[r - 1][j]);
        }

        printf("\n");
    }

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", nums[j][c - 1]);
        }

        printf("\n");
    }

    return 0;
}