#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int star = 10 + n;
    int space = star / 2;
    for (int i = 1; i <= star; i += 2)
    {
        for (int j = space; j > 0; j--)
        {
            printf(" ");
        }
        space--;

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // input a dewa number star print korbo 2nd part
    for (int i = 1; i <= 5; i++)
    {
        printf("     ");
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}