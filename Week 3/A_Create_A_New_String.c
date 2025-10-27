#include <stdio.h>
#include <string.h>
int main()
{
    char first_string[10000], last_string[10000];
    scanf("%s %s", first_string, last_string);

    printf("%d %d\n", strlen(first_string), strlen(last_string));
    printf("%s %s", first_string, last_string);
    return 0;
}