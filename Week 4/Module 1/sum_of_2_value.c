#include <stdio.h>
int main()
{
    int n;
    int sum = 8;
    scanf("%d", &n);

    int myArr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myArr[i]);
    }

    int flag = 0;
    for (int i = 0; i < n - 1; i++) // condition n-1 dita hobe. Karon last index er age porjonto loop chalate hobe. Because nicher loop a jokhon last index porjonto chalabo, tokhon i=4, j=4 hobe. But i and j same howa jabena.
    {
        for (int j = i + 1; j < n; j++) // aikhane j= i+1 dita hobe. Karon same index 2 bar kore sum kora jabena.
        {

            if (myArr[i] + myArr[j] == sum)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1) // flag variable ke special case onujai ai name dewa. Because loop er moddhe yes or no print korle, akadhikbar print hosse. Tai ai varibale ke flag variable bole.
    {
        printf("YES");
    }

    return 0;
}