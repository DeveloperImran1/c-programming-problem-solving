#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int star = n * 2;
    int space = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < space; j++)
        {
            printf(" ");
        }
        space++;

        for (int j = star; j > 1; j--)
        {
            printf("*");
        }
        star -= 2;

        printf("\n");
    }

    return 0;
}

// Output: for input 5
// *********
//  *******
//   *****
//    ***
//     *
