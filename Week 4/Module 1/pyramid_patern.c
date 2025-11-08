#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int start_space = n - 1;
    int end_space = n - 1;
    for (int i = 0; i < n; i++)
    {

        // left site space print
        for (int j = start_space; j > 0; j--)
        {
            printf(" ");
        }
        start_space--;

        // mid point a star print
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star += 2;

        // right site space print
        for (int j = end_space; j > 0; j--)
        {
            printf(" ");
        }
        end_space--;

        // create new line
        printf("\n");
    }

    return 0;
}
