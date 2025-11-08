#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;
    int count = 1;
    int symbol = 1;
    int space = n - 1;
    int spaceCount = 1;
    for (int i = 1; i < (n * 2); i++)
    {
        for (int m = space; m > 0; m--)
        {
            printf(" ");
        }

        if (spaceCount < n)
        {
            space--;
        }
        else
        {
            space++;
        }
        spaceCount++;

        for (int j = 1; j <= star; j++)
        {
            if (symbol)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        symbol = !symbol;

        count += 2;
        if (count < n * 2)
        {
            star += 2;
        }
        else
        {
            star -= 2;
        }

        printf("\n");
    }

    return 0;
}