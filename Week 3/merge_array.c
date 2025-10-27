#include <stdio.h>
int main()
{
    // 1st array er size and array declare and input set.
    int m;
    scanf("%d", &m);

    int arr1[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // 2nd array er size and array declare and input set.

    int n;
    scanf("%d", &n);

    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr2[i]);
    }

    // 3rd array er size and array declare and value set from arr1.

    int x = m + n;
    int arr3[x];
    for (int i = 0; i < m; i++)
    {
        arr3[i] = arr1[i];
    }

    // 3rd array er value set from arr2.

    int index = 0;
    for (int i = m; i < m + n; i++)
    {
        arr3[i] = arr2[index];
        index++;
    }

    for (int i = 0; i < x; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}