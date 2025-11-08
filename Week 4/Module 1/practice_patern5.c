#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int star = n * 2;
    int space = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf("%c ", j + 65);
        }
        space++;

        printf("\n");
    }

    return 0;
}

// Output: for input 5
// A
// A B
// A B C
// A B C D
// A B C D E
