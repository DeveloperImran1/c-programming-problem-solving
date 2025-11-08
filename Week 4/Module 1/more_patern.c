#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int value = 1;
    int space = n;

    for (int i = 0; i < n; i++)
    {

        for (int j = space; j > 0; j--)
        {
            printf(" ");
        }
        space--;

        for (int j = 1; j <= value; j++)
        {
            printf("%d ", j);
        }

        value++;
        printf("\n");
    }

    return 0;
}