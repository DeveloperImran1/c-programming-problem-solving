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

    int jadu_matrix = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0, k = c - 1; j < c; j++, k--)
        {
            if (i == j)
            {

                if (nums[i][j] != 1)
                {
                    jadu_matrix = 0;
                }
            }
            if (i + j == c - 1)
            {
                if (nums[i][j] != 1)
                {

                    jadu_matrix = 0;
                }
            }

            if (i != j && i + j != c - 1)
            {

                if (nums[i][j] != 0)
                {
                    jadu_matrix = 0;
                }
            }
        }
    }

    // printf("%d", jadu_matrix);

    if (jadu_matrix == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}