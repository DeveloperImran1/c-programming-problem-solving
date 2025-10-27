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

    // is Palindrome Array
    int a = 0;
    int b = n - 1;
    char *result = "YES";

    while (a < b)
    {
        if (myArr[a] == myArr[b])
        {
            result = "YES";
        }
        else
        {
            result = "NO";
            break;
        }

        a++;
        b--;
    }

    printf("%s", result);

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", myArr[i]);
    // }
    return 0;
}