#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char str[10001];
        scanf("%s", &str);

        int capital_letter = 0;
        int small_letter = 0;
        int number = 0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] > 64 && str[i] < 91)
            {
                capital_letter++;
            }
            else if (str[i] > 96 && str[i] < 123)
            {
                small_letter++;
            }
            else
            {
                number++;
            }
        }

        printf("%d %d %d \n", capital_letter, small_letter, number);
    }
    return 0;
}