#include <stdio.h>

void print_arr(int a[], int n, int j)
{
    if (j == n)
    {
        return;
    }
    printf("%d\n", a[j]);
    print_arr(a, n, j + 1);
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