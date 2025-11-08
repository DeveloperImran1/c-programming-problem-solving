#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int myArr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myArr[i]);
    }

    for (int i = 0; i < n - 1; i++) // condition n-1 dita hobe. Karon last index er age porjonto loop chalate hobe. Because nicher loop a jokhon last index porjonto chalabo, tokhon i=4, j=4 hobe. But i and j same howa jabena.
    {
        for (int j = i + 1; j < n; j++) // aikhane j= i+1 dita hobe. Karon same index 2 bar kore sum kora jabena.
        {

            // For ascending order
            // if (myArr[i] > myArr[j])
            // {
            //     int swap_value = myArr[i];
            //     myArr[i] = myArr[j];
            //     myArr[j] = swap_value;
            // }

            // For descending order
            if (myArr[i] < myArr[j])
            {
                int swap_value = myArr[i];
                myArr[i] = myArr[j];
                myArr[j] = swap_value;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", myArr[i]);
    }

    return 0;
}