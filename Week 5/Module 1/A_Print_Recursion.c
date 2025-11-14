#include <stdio.h>

void print_str(int n, int j)
{
    if (j == n)
    {
        return;
    }
    printf("I love Recursion\n");
    print_str(n, j + 1);
}

int main()
{

    int n;
    scanf("%d", &n);

    print_str(n, 0);

    return 0;
}