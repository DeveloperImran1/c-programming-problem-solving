#include <stdio.h>
int main()
{

    /*
    Diagonal matrix condition:
        1. matrix ke square matrix hote hobe.
        2. matrix er 2 ta corno (primary and secondary korno) bade sokol value 0 hote hobe.

        3. Primary diagonal hower condition holo: loop chalanor somoi row and column er man same thakbe. I mean 0 number row er 0 number column (0, 0), 1 number row er 1 number column (1, 1) ai element gulo holo primary diagonal.
        4. Secondary diagonal hower condition holo: loop chalanor somoi row and column er man sum korle, all time (row-1) hobe. I mean 0 number row er 2 number column (0, 2) sum korle (row-1) hobe, 1 number row er 1 number column (1, 1) sum korle (row-1) hobe. ai element gulo holo secondary diagonal.

        5. Flag variable er maddhome handle korbo, aita diagonal naki. jodi kokhono diagonal (1) hoia jai, taholei sub loop and main loop theke return kore dibo.
    */

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

    int flag = 0;

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
                else if ((i + j) == r - 1) // aikhane akta issue ase, karon aksathe 2 ta korno borarbor value thakte parena. So aita 2 bar check kora dorkar.
                {
                    // Secondary diagonal element gulo ke skip kortesi. Karon primary and secondary korno borabor element ke nia amader kono kaj nei, tader ke skip kore baki element ke nia kaj korte
                }
                else
                {
                    // Outside of primary diagonal
                    if (my2dArr[i][j] != 0)
                    {
                        flag = 1;
                        return;
                    }
                }
            }

            // flag er value 1 hoia gele main loop close kore dibo
            if (flag == 1)
            {
                return;
            }
        }
    }
    else
    {
        printf("It is not a square matrix");
    }

    // print main result --> Is it diagonal?
    if (flag == 0)
    {
        printf("This is diagonal matrix");
    }
    else
    {
        printf("This is not a diagonal matrix");
    }

    return 0;
}