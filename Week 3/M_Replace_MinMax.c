#include <stdio.h>
#include <limits.h>

int main()
{
    // array er size declare and input
    int n;
    scanf("%d", &n);

    // arra declare and set input value
    int myArr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myArr[i]);
    }

    int maxNum = INT_MIN;
    int maxNumIndex;

    int minNum = INT_MAX;
    int minNumIndex;

    for (int i = 0; i < n; i++)
    {
        if (maxNum < myArr[i])
        {
            maxNum = myArr[i];
            maxNumIndex = i;
        }
        if (minNum > myArr[i])
        {
            minNum = myArr[i];
            minNumIndex = i;
        }
    }

    int temp = myArr[minNumIndex];
    myArr[minNumIndex] = myArr[maxNumIndex];
    myArr[maxNumIndex] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", myArr[i]);
    }
    return 0;
}