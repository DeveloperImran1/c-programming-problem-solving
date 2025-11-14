#include <stdio.h>

void print_digit(int number)
{

    if (number == 0)
    {
        return;
    }

    int result = number % 10;
    int newNumber = number / 10;

    print_digit(newNumber);

    printf("%d ", result);
}
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int number;
        scanf("%d", &number);

        if (number == 0)
        {
            printf("0");
            printf("\n");
        }
        else
        {
            print_digit(number);
            printf("\n");
        }
    }

    return 0;
}