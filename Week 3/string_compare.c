#include <stdio.h>
#include <stdbool.h> // true likhar jonno ai header file import korte hoi.
#include <string.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    // Way 1: Manualy compare
    // int i = 0;
    // while (true)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("Equal");
    //         break;
    //     }
    //     else if (a[i] == '\0')
    //     {
    //         printf("A is smallest");
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("B is smallest");
    //         break;
    //     }
    //     else if (a[i] < b[i])
    //     {
    //         printf("A is smallest");
    //         break;
    //     }
    //     else if (a[i] > b[i])
    //     {
    //         printf("B is smallest");
    //         break;
    //     }
    //     else if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    // }

    // Way 2: Compare with Built in method
    int value = strcmp(a, b);

    if (value < 0)
    {
        printf("A is smaller");
    }
    else if (value == 0)
    {
        printf("Equal");
    }
    else if (value > 0)
    {
        printf("B is smaller");
    }

    return 0;
}