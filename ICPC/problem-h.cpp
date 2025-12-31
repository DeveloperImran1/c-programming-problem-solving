
#include <stdio.h>

int main()
{
    int test_case;
    scanf("%d", &test_case);

    for (int i = 0; i < test_case; i++)
    {
        int chemical_number, num_reactions;
        scanf("%d %d", &chemical_number, &num_reactions);

        long long chemicals[2500];
        int total_chemical = 0;

        for (int i = 0; i < chemical_number; i++)
        {
            long long chem;
            scanf("%lld", &chem);
            chemicals[total_chemical] = chem;
            total_chemical++;
        }

        long long a[1005];
        long long b[1005];
        long long c[1005];

        for (int i = 0; i < num_reactions; i++)
        {
            scanf("%lld %lld %lld", &a[i], &b[i], &c[i]);
        }

        int keep_going = 1;

        while (keep_going == 1)
        {
            keep_going = 0;

            for (int i = 0; i < num_reactions; i++)
            {
                long long first = a[i];
                long long second = b[i];
                long long product = c[i];

                int available_first = 0;
                for (int j = 0; j < total_chemical; j++)
                {
                    if (chemicals[j] == first)
                    {
                        available_first = 1;
                        break;
                    }
                }

                int available_second = 0;
                for (int j = 0; j < total_chemical; j++)
                {
                    if (chemicals[j] == second)
                    {
                        available_second = 1;
                        break;
                    }
                }

                int exist = 0;
                for (int j = 0; j < total_chemical; j++)
                {
                    if (chemicals[j] == product)
                    {
                        exist = 1;
                        break;
                    }
                }

                if (available_first == 1 && available_second == 1 && exist == 0)
                {
                    chemicals[total_chemical] = product;
                    total_chemical++;
                    keep_going = 1;
                }
            }
        }

        printf("%d\n", total_chemical);
    }

    return 0;
}