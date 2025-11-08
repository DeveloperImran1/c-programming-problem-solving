#include <stdio.h>

int char_to_ascii(char a)
{
    return a;
}

char small_to_capital(char b)
{
    return b - 32;
}

int main()
{

    // char a;
    // scanf("%c", &a);
    // int result = char_to_ascii(a);

    char b;
    scanf("%c", &b);
    char result = small_to_capital(b);

    printf("%c", result);

    return 0;
}