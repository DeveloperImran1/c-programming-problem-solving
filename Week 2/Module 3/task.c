#include <stdio.h>
#include <limits.h>

int main()
{
    // Problme: Take an array from input and print all the even numbers of that array.
    // int n;
    // scanf("%d", &n);
    // int myArr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &myArr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (myArr[i] % 2 == 0)
    //     {
    //         printf("%d\n", myArr[i]);
    //     }
    // }

    // Problem: Take an array from input and count how many odd numbers are present in that array.
    // int n;
    // scanf("%d", &n);
    // int myArr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &myArr[i]);
    // }

    // int total_odd_num = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (myArr[i] % 2 != 0)
    //     {
    //         total_odd_num += 1;
    //     }
    // }

    // printf("%d\n", total_odd_num);

    // Problem: Take an array from input and print the maximum value of that array.
    // int n;
    // scanf("%d", &n);
    // int myArr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &myArr[i]);
    // }

    // int max = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {

    //     if (myArr[i] > max)
    //     {
    //         max = myArr[i];
    //     }
    // }

    // printf("%d\n", max);

    // Problem: Take an array from input and print the minimum value of that array.
    int n;
    scanf("%d", &n);
    int myArr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myArr[i]);
    }

    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {

        if (myArr[i] < min)
        {
            min = myArr[i];
        }
    }

    printf("%d\n", min);

    return 0;
}