#include <stdio.h>

void print_arr(int a[], int n, int j)
{
    if (j == n)
    {
        return;
    }

    print_arr(a, n, j + 1);

    if (j % 2 == 0)
    {
        printf("%d ", a[j]);
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    print_arr(a, n, 0);

    return 0;
}