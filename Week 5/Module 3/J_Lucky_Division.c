#include <stdio.h>
int main()
{
    /*
    Problem: Kono akta number diba, seita lucky number naki seita khuje ber korte hobe. Lucky hole "YES" print korte. Ar almost lucky holew "YES" print korte.
    1. Jei number er moddhe sudho 4, 7 thakbe. Sei number ta holo lucky number. 4, 7 er bahira jodi kono digit exist kore oi number er moddhe tahole sei number lucky hobena.
    2. Number ke jodi 4 or 7 dara modulas korle 0 hoi, tahole seita almost lucky number.
    */

    int n;
    scanf("%d", &n);
    int copy_of_n = n;

    int is_lucky = 1;

    // Lucky number kina chek kortesi.
    while (copy_of_n != 0)
    {
        int last_digit = copy_of_n % 10;

        if (last_digit != 4 && last_digit != 7)
        {

            is_lucky = 0;
        }

        copy_of_n = copy_of_n / 10;
    }

    // Almost lucky number kina, check kortesi
    if (is_lucky == 1)
    {

        printf("%s", "YES");
    }
    else
    {
        if (n % 4 == 0 || n % 7 == 0)
        {

            printf("%s", "YES");
        }
        else
        {
            printf("%s", "NO");
        }
    }

    return 0;
}