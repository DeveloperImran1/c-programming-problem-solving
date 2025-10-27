#include <stdio.h>
int main()
{

    // array er size declare and input
    int n;
    scanf("%d", &n);

    // arra declare and set input value
    int myArr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myArr[i]);
    }

     // Reverse an array way 3 with while loop:
    int a = 0;
    int b = n - 1;
    while (a < b)
    {
        int temp = myArr[a];
        myArr[a] = myArr[b];
        myArr[b] = temp;

        a++;
        b--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", myArr[i]);
    }
    return 0;
}