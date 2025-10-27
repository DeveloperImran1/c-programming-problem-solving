#include <stdio.h>
int main()
{
    char myArr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &myArr[i]); // Input: IMRAN
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%c", myArr[i]); // Output: IMRAN
    }
    return 0;
}