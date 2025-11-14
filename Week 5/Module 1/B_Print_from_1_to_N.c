#include <stdio.h>

void print_num(int n, int j)
{
    if (j == n + 1)
    {
        return;
    }
    printf("%d\n", j);
    print_num(n, j + 1);
}

int main()
{

    int n;
    scanf("%d", &n);

    print_num(n, 1);

    return 0;
}