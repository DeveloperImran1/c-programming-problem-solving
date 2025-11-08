
#include <stdio.h>
#include <math.h>

int main()
{

    // array create and input.
    int myArr[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &myArr[i]);
    }

    int copyOfMyArr[3];
    for (int i = 0; i < 3; i++)
    {
        copyOfMyArr[i] = myArr[i];
    }

    // 1dt part output

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (myArr[i] > myArr[j])
            {
                int temp = myArr[i];
                myArr[i] = myArr[j];
                myArr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", myArr[i]);
    }

    printf("\n");

    // 2nd part output

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", copyOfMyArr[i]);
    }

    return 0;
}