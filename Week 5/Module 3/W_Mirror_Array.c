#include <stdio.h>
int main()
{
    int n, m; // row = n, column = m;
    scanf("%d %d", &n, &m);

    int myArr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &myArr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            printf("%d ", myArr[i][j]);
        }
        printf("\n");
    }

    return 0;
}