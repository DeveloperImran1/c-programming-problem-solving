#include <stdio.h>

int main()
{

    int A, B;
    scanf("%d %d", &A, &B);

    int myArr[A];
    for (int i = 0; i < A; i++)
    {
        scanf("%d", &myArr[i]);
    }

    int frecArray[100001] = {0}; // array er size 10^5 porjonto hote pare, requirement a dewa ase, tai aita dilam. Aita aivabe fixed akta size bole korte pari or B er value dia initialize kore, tarpor loop chalia all index ke 0 value set kore dita pari.

    for (int i = 0; i < A; i++)
    {

        int value = myArr[i];
        frecArray[value - 1]++;
    }

    for (int i = 0; i < B; i++)
    {
        printf("%d\n", frecArray[i]);
    }

    return 0;
}
