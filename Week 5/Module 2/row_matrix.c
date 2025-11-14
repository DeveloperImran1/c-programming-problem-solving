#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int my2dArr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &my2dArr[i][j]);
        }
    }
    // row matrix hower jonno r == 1 hobe.
    // Column matrix hower jonno c == 1 hobe.
    // Square matrix hower jonno r == c hobe.
    // Null matrix hower jonno r*c == total_zero_count hobe.
    if (r == 1)
    {
        printf("This is a row matrix");
    }
    else
    {
        printf("This is not a row matrix");
    }

    return 0;
}