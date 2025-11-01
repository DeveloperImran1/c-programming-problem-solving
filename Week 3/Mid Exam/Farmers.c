#include <stdio.h>
#include <math.h>

int main()
{
    // Problem explain:

    // M1 = koto jon farmer
    // D = akta kaj koto din a complete korte pare.
    // M2 = kaj suror age aro M2 sonkhok krisok add holo M1 er sathe.
    //
    //
    // Input:
    // 1st line: T = koita testcase thakbe or koibar loop chalia main kaj ta korbo, sei number.
    // 2nd, 3rd.. every line a thakbe: M1, M2, D
    //
    // Output:
    // M1 jon mila kajta complete korte jei time lagto, akhon M1+M2 jon mila complete korte koto din kom somoi lagbe, sita output a dita hobe.

    // Main task solving steps:
    // 1. 1 jon farmer er kotodin lage ta ber korte hobe. or (M1*D)
    // 2. M1+M2 kore devide korte hobe, 1 jon er joto time lage tar sathe.
    // 3. Intiger a convert korte hobe result ke.

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        float nums[3];

        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &nums[j]);
        }

        double total_need_days = (nums[0] * nums[2]) / (nums[0] + nums[1]);
        int result = ceil(nums[2] - total_need_days);
        printf("%d\n", result);
    }

    return 0;
}