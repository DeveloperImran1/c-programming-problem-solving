#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int myArr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &myArr[i]);
    }

    int lowest = INT_MAX;
    int position;

    for (int i = 0; i < n; i++)
    {
        if (myArr[i] < lowest)
        {
            lowest = myArr[i];
            position = i + 1;
        }
    }
    printf("%d %d", lowest, position);

    return 0;
}