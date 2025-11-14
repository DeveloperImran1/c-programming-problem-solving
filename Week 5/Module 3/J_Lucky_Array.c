#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
    /*
    1. Akta array dewa thake, tar moddhe minimum number ta ber korte hobe.
    2. Oi minimum number ta oi array te total koto bar ase. Joto bar ase, seita jodi odd hoi, tahole "Lucky" ar even hole "Unlucky"
    */

    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int min_num = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // set minimum number
        if (min_num > nums[i])
        {
            min_num = nums[i];
        }
    }

    // count korbo, minimum number ta kotobar ase.
    int count_min = 0;
    for (int i = 0; i < n; i++)
    {
        if (min_num == nums[i])
        {
            count_min += 1;
        }
    }

    if (count_min % 2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }

    return 0;
}