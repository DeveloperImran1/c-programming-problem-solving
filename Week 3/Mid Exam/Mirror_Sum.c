#include <stdio.h>
int main()
{
    // 2 ta array er length declare and input
    int size;
    scanf("%d", &size);

    // 2 ta array initialize and value set using loop
    int nums1[size];
    int nums2[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &nums1[i]);
    }
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &nums2[i]);
    }

    // arr2 ke reverse kora jonno new array create and value set using loop.
    int reverseArr2[size];

    for (int i = size - 1, j = 0; i >= 0; i--, j++)
    {
        reverseArr2[j] = nums2[i];
    }

    // concat with 1st array and reverse array.
    for (int i = 0; i < size; i++)
    {

        printf("%d ", reverseArr2[i] + nums1[i]);
    }

    return 0;
}