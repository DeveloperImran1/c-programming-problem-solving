#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char str1[51], str2[51];
        scanf("%s %s", &str1, &str2);

        int str_1_len = strlen(str1);
        int str_2_len = strlen(str2);

        if (str_1_len >= str_2_len)
        {
            for (int j = 0; str1[j] != '\0'; j++)
            {
                if (str1[j] != '\0' && str2[j] != '\0')
                {
                    printf("%c%c", str1[j], str2[j]);
                }
                else if (str1[j] == '\0')
                {
                    printf("%c", str2[j]);
                }
                else if (str2[j] == '\0')
                {
                    printf("%c", str1[j]);
                }
            }
        }
        else if (str_2_len > str_1_len)
        {

            for (int j = 0; str2[j] != '\0'; j++)
            {
                if (str1[j] != '\0' && str2[j] != '\0')
                {
                    printf("%c%c", str1[j], str2[j]);
                }
                else if (str1[j] == '\0')
                {
                    printf("%c", str2[j]);
                }
                else if (str2[j] == '\0')
                {
                    printf("%c", str1[j]);
                }
            }
        }
        printf("\n");
    }

    return 0;
}