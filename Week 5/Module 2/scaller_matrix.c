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

    // ------------------------------ 1st chek is it primary diagonal matrix
    int primary_diagonal = 0;

    //  is it square matrix
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    // Primary diagonal element gulo ke skip kortesi
                }
                else
                {
                    // Outside of primary diagonal
                    if (my2dArr[i][j] != 0)
                    {
                        primary_diagonal = 1;
                        break;
                    }
                }
            }

            // flag er value 1 hoia gele main loop close kore dibo
            if (primary_diagonal == 1)
            {
                break;
            }
        }
    }
    else
    {
        printf("It is not a square matrix");
    }

    int is_scaller_matrix = 0;

    // print main result --> Is it primary diagonal?
    if (primary_diagonal == 0)
    {
        printf("This is primary diagonal matrix\n");

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (my2dArr[i][j] != my2dArr[0][0])
                {
                    is_scaller_matrix = 1;
                    printf("This is scaller matrix\n");
                    break;
                }
            }

            if (is_scaller_matrix == 1)
            {
                break;
            }
        }
    }
    else
    {
        printf("This is not primary diagonal matrix\n");
    }

    // ------------------------------ 2nd chek is it secondary diagonal matrix
    int secondary_diagonal = 0;

    //  is it square matrix
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i + j == r - 1)
                {
                    // Secondary diagonal element gulo ke skip kortesi
                }
                else
                {
                    // Outside of Secondary diagonal
                    if (my2dArr[i][j] != 0)
                    {
                        secondary_diagonal = 1;
                        break;
                    }
                }
            }

            // flag er value 1 hoia gele main loop close kore dibo
            if (secondary_diagonal == 1)
            {
                break;
            }
        }
    }
    else
    {
        printf("It is not a square matrix\n");
    }

    // print main result --> Is it secondary diagonal?
    if (secondary_diagonal == 0)
    {
        printf("This is secondary diagonal matrix\n");

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (my2dArr[i][j] != my2dArr[0][0])
                {
                    is_scaller_matrix = 1;
                    printf("This is scaller matrix\n");
                    break;
                }
            }

            if (is_scaller_matrix == 1)
            {
                break;
            }
        }
    }
    else
    {
        printf("This is not secondary diagonal matrix\n");
    }

    return 0;
}