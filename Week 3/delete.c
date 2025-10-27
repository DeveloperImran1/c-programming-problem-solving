#include <stdio.h>
int main()
{
    // array er length declare and input nibo.
    int n;
    scanf("%d", &n);

    // array ke declare and input nia set kortesi.
    int myArr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myArr[i]);
    }

    // kon index ke delete korte chassi, sei index input nissi
    int index;
    scanf("%d", &index);

    // array theke sei index er element ke remove kortesi
    for (int i = index; i < n; i++)
    {
        myArr[i] = myArr[i + 1];
    }

    // array er length 1 kome dilam
    n--;

    // loop chalia print kortesi updated array ke.
    for (int i = 0; i < n; i++)
    {
        printf("%d ", myArr[i]);
    }

    return 0;
}