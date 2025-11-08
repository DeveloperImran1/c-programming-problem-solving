
#include <stdio.h>
#include <limits.h>

void min_max(int arr[], int n)
{
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d %d", min, max);
}

int main()
{
    int n;
    scanf("%d", &n);
    int myArr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myArr[i]);
    }

    min_max(myArr, n);

    return 0;
}