// Take an array as input and then reverse it using a function

#include <stdio.h>

void reverseFun(int arr[], int n)
{
    int j = n - 1;
    for (int i = 0; i < j; i++)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        j--;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int myArr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myArr[i]);
    }

    reverseFun(myArr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", myArr[i]);
    }
    return 0;
}