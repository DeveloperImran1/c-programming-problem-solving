#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    printf("a=%d , b=%d \n", a, b);

    // swaping
    int temp = a;
    a = b;
    b = temp;
    printf("a=%d , b=%d", a, b);
    return 0;
}