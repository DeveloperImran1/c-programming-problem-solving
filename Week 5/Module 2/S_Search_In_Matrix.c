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

    int find_number;
    scanf("%d", &find_number);

    int result = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (my2dArr[i][j] == find_number)
            {
                result = 1;
                break;
            }
        }
    }

    if (result == 1)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}