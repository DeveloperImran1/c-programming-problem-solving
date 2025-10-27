#include <stdio.h>
int main()
{
    char input;
    scanf("%c", &input);

    if (input >= '0' && input <= '9')
    {
        printf("IS DIGIT\n");
    }
    else if ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z'))
    {
        printf("ALPHA\n");
        if (input >= 'A' && input <= 'Z')
        {
            printf("IS CAPITAL\n");
        }
        else
        {
            printf("IS SMALL\n");
        }
    }

    return 0;
}