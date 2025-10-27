#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    // array declare and initial value input
    int myArr[n + 1];
    for (int m = 0; m < n; m++)
    {
        scanf("%d", &myArr[m]);
        // printf("%d ", myArr[m]);
    }

    // insert index and value input
    int index, value;
    scanf("%d %d", &index, &value);

    // move element in next index
    for (int i = n; i > index; i--)
    {
        myArr[i] = myArr[i - 1];
    }

    // set new value in expcted index
    myArr[index] = value;

    for (int m = 0; m <= n; m++)
    {
        printf("%d ", myArr[m]);
    }

    return 0;
}