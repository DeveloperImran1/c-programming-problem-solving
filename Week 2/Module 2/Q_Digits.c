#include <stdio.h>
int main()
{
    int count;
    scanf("%d", &count);

    for (int i = 1; i <= count; i++)
    {
        int number;
        scanf("%d", &number);

        if (number == 0)
        {
            printf("0");
        }
        int current_num = number;
        while (current_num)
        {
            int last_num = current_num % 10;
            printf("%d ", last_num);
            current_num = current_num / 10;
            if (current_num == 0)
            {

                break;
            }
        }
        printf("\n");
    }
    return 0;
}