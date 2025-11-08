// // 1 to n porjonto star print.
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int star = 1;

//     for (int i = 1; i <= n; i++) // koto gulo line hobe, ta print kore.
//     {
//         for (int j = 1; j <= star; j++)
//         {
//             printf("*");
//         }
//         star++;
//         printf("\n");
//     }

//     return 0;
// }

// n to 1 porjonto star print.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int star = n;

    for (int i = 1; i <= n; i++) // koto gulo line hobe, ta print kore.
    {
        for (int j = star; j > 0; j--)
        {
            printf("*");
        }
        star--;
        printf("\n");
    }

    return 0;
}