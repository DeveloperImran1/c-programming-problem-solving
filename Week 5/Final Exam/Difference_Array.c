#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        int n;
        scanf("%d", &n);

        int nums[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &nums[j]);
        }

        // copy array from nums
        int asc_arr[n];
        for (int j = 0; j < n; j++)
        {
            asc_arr[j] = nums[j];
        }

        // set ascending order to asc_arr
        for (int j = 0; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (asc_arr[j] > asc_arr[k])
                {
                    int temp = asc_arr[j];
                    asc_arr[j] = asc_arr[k];
                    asc_arr[k] = temp;
                }
            }
        }

        // create new array  absolute difference from nums and asc_arr
        int difference_arr[n];
        for (int j = 0; j < n; j++)
        {
            difference_arr[j] = nums[j] - asc_arr[j];
        }

        // print final array
        for (int j = 0; j < n; j++)
        {
            printf("%d ", abs(difference_arr[j]));
        }

        printf("\n");
    }

    return 0;
}