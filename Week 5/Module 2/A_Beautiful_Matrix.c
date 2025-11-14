#include <stdio.h>
#include <math.h>

int main()
{

    int my2dArr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &my2dArr[i][j]);
        }
    }

    int current_row, current_col;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (my2dArr[i][j] == 1)
            {
                current_row = i;
                current_col = j;
            }
        }
    }
    // printf("%d %d", current_row, current_col);
    // Our need row = 2, col = 2;
    int result = abs(2 - current_row) + abs(2 - current_col);
    printf("%d", result);
    return 0;
}