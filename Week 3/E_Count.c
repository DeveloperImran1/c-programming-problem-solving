#include <stdio.h>
int main()
{
    char s[1000001];
    scanf("%s", s);

    int sum = 0;
    for (int i = 0; s[i]; i++)
    {
        // printf("%d\n", s[i] + sum);
        // array er moddhe thaka number gulo akta kore charecter hoia ase. Taderke plus korar jonno int a convert korte hobe. Direct jodi "%d" dia plus kori. Tahole tader ASCII value plus hobe. Because amra jani kono charecter ke "%d" dia print korle, tar ASCII value output ase.

        // 0 er ASCII value holo 48, 1 er ASCII value 49. Thats mean kono charecter er ASCII value ber kore 48 dia minus korlei output main number ta pawa jabe.

        sum = (s[i] - 48) + sum;
    }
    printf("%d", sum);

    return 0;
}