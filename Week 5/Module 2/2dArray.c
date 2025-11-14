#include <stdio.h>
int main()
{
    // dataType arrName[rowNumbers][colNumbers];
    // arrName[rowNumber][colNumber] = value;
    // printf("%d ", arrName[rowNumber][colNumber]);

    // Ex: 1 ----------------->
    // int my2dArr[2][3];
    // my2dArr[1][2] = 10;
    // printf("%d ", my2dArr[1][2]);

    // Ex: 2 ----------------->
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
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", my2dArr[i][j]);
        }
        printf("\n");
    }

    return 0;
}