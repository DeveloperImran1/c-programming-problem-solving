
#include <stdio.h>
#include <math.h>

int main()
{

    long long int n;
    scanf("%lld", &n);

    if (n < 2)
    {
        printf("%d", 0);
        return 0;
    }

    for (int i = 1; 1; i++)
    {
        n = n / 2;

        if (n < 2)
        {
            printf("%d", i);
            break;
        }
    }

    return 0;
}

// ------------------------->

// #include <stdio.h>
// #include <math.h>

// int rec(long long int n)
// {
//     if (n < 2)
//     {
//         return 0;
//     }

//     int tem_res = rec(n / 2);
//     return tem_res + 1;
// }

// int main()
// {

//     long long int n;
//     scanf("%lld", &n);

//     int res = rec(n);
//     printf("%d", res);

//     return 0;
// }