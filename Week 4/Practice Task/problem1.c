// Take 2 values as input and swap them using a function

#include <stdio.h>

void swap(int *a, int *b)
{
    int swap = *a;
    *a = *b;
    *b = swap;
    // printf("%d %d\n", *a, *b);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}