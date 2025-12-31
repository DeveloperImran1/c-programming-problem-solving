// #include <stdio.h>
// #include <stdlib.h>
// #include <vector>
// using namespace std;
// #include <unordered_set>

// int main()
// {
//     int t;
//     scanf("%d", &t);
//     // while (t--)
//     // {

//     // }

//     for (int i = 0; i < t; i++)
//     {
//         int n, m;
//         scanf("%d %d", &n, &m);

//         vector<long long> present;
//         unordered_set<long long> has;

//         for (int i = 0; i < n; i++)
//         {
//             long long x;
//             scanf("%lld", &x);
//             present.push_back(x);
//             has.insert(x);
//         }

//         // Read reactions
//         vector<vector<long long>> reactions(m, vector<long long>(3));
//         for (int i = 0; i < m; i++)
//         {
//             scanf("%lld %lld %lld", &reactions[i][0], &reactions[i][1], &reactions[i][2]);
//         }

//         bool changed = true;

//         // Loop until no new chemical is produced
//         while (changed)
//         {
//             changed = false;

//             for (int i = 0; i < m; i++)
//             {
//                 long long x = reactions[i][0];
//                 long long y = reactions[i][1];
//                 long long z = reactions[i][2];

//                 if (has.count(x) && has.count(y) && !has.count(z))
//                 {
//                     present.push_back(z);
//                     has.insert(z);
//                     changed = true;
//                 }
//             }
//         }

//         printf("%zu\n", present.size());
//     }

//     return 0;
// }

// --------------------->

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