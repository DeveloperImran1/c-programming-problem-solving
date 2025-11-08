#include <stdio.h>
#include <math.h>

int main()
{
    int result1 = floor(5.6);
    printf("%d\n", result1); // Output: 5

    int result2 = ceil(5.6);
    printf("%d\n", result2); // Output: 6

    int result3 = round(5.6);
    printf("%d\n", result3); // Output: 6

    float result4 = sqrt(20); // ai variable ke float a declare korte hobe. Karon kono number ke sqrt korle float value aste pare. So jodi variable int type er hoi, tahole point er por value gulo remove hoia jai.
    printf("%f\n", result4);  // Output: 4.472136

    int result5 = pow(3, 2); // aikhane 3 er upor power hisabe 2 use hosse. I mean: 3**2
    printf("%d\n", result5); // Output: 9

    int result6 = abs(-5);   // aikhane abs() er moddhe jei number dibo, tar samne jodi kono +, - thake, take remove kore plus kore diba.
    printf("%d\n", result6); // Output: 5

    return 0;
}