#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);

    int first_digit = input / 10;
    int last_digit = input % 10;

    if (first_digit == 0 || last_digit == 0)
    {
        printf("YES");
    }
    else if (first_digit % last_digit == 0)
    {
        printf("YES");
    }
    else if (last_digit % first_digit == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}