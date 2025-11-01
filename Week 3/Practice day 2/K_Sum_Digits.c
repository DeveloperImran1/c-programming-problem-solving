#include <stdio.h>

int main()
{

    // Input:  First line contains a number N(1  ≤  N  ≤  10^6) number of digits.
    // Question a uporer requirement ta dewa ase. Oi line er mane holo N er value er digit hote pare total 10^6 mane 125234223425232452424... airokom or total length 10,00000 hote pare. But amra int or long long int a maxium 10^18 er moddhe value rakhte pari. length vinno ar value vinno.
    int n;
    char num[1000001];
    scanf("%d %s", &n, &num);

    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {

        char currentChar = num[i] - 48; // 0 Charecter er ASCII value 48 tai, charecter value theke ASCII value minus korle decimal number pawa jabe.
        sum = sum + currentChar;
    }
    printf("%d", sum);

    return 0;
}