#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int myArr[n];

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myArr[i]);

        sum += myArr[i];
    }
    printf("%d ", sum);
    return 0;
}