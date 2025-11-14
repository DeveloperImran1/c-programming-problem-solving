#include <stdio.h>

void print_num(int n, int j)
{
    if (n == j)
    {
        return;
    }

    if (n > j + 1)
    {
        printf("%d ", n);
    }
    else if (n > j)
    {
        printf("%d", n);
    }
    print_num(n - 1, j);
}

int main()
{

    int n;
    scanf("%d", &n);

    print_num(n, 0);

    return 0;
}