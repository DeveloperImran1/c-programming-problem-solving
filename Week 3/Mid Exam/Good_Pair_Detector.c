#include <stdio.h>
int main()
{
    // array er length declare and input
    int size;
    scanf("%d", &size);

    // array initialize and value set using loop
    int nums[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &nums[i]);
    }

    int count = 0;

    // my code
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            // printf("%d : %d\n", nums[i], nums[j]);

            if (nums[i] % 2 == 0 && (nums[j] % 2 == 1 || nums[j] % 2 == -1))
            {
                count++;
            }
            else if ((nums[i] % 2 == 1 || nums[i] % 2 == -1) && nums[j] % 2 == 0)
            {
                count++;
            }
        }
    }

    // instructor code
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         if (nums[i] % 2 == 0 && (nums[j] % 2 == 1 || nums[j]) % 2 == -1)
    //         {
    //             count++;
    //         }
    //         else if ((nums[i] % 2 == 1 || (nums[i]) % 2 == -1) && (nums[j]) % 2 == 0)
    //         {
    //             count++;
    //         }
    //         // printf("%d, %d\n", nums[i], i + nums[j]);
    //     }
    // }

    printf("%d", count);

    return 0;
}