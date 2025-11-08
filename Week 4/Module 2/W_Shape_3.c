#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int space = n;
    int star = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < space; j++)
        {
            printf(" ");
        }
        space--;

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star += 2;

        printf("\n");
    }

    int space2 = 1;
    int star2 = n * 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < space2; j++)
        {
            printf(" ");
        }
        space2++;

        for (int j = 1; j < star2; j++)
        {
            printf("*");
        }
        star2 -= 2;

        printf("\n");
    }

    return 0;
}