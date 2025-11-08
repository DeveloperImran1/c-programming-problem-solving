#include <stdio.h>

// Function declare basic syntax:
// return_type function_name(perameter_type perameter_name)
// {
//     // statements
//     return result;
// }

// Function ke all time main() funciton er upore declare kora hoi. But jodi main function er niche declare kori, tahole initialize part ta upore akbar likhte hoi age.
int sum(int a, int b);

int main()
{

    int result = sum(10, 20);
    printf("%d", result);
    return 0;
}

// main function er niche liheci sum function. Jar fole upore initialize korte hoiase.
int sum(int a, int b)
{
    int result = a + b;
    return result;
}