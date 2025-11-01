#include <stdio.h>
#include <stdio.h>

int main()
{

    // 2ta string and 2ta number input nilam.
    char str1[1001], str2[1001];
    int a, b;
    scanf("%s %s %d %d", &str1, &str2, &a, &b);

    // string 1 er length ta ber korbo, karon oi length er por theke string 2 er charecter gulo add korbo.
    int str1_len = strlen(str1);
    int j = 0;
    for (int i = a; i <= b; i++)
    {
        str1[str1_len + j] = str2[i];
        j++;
    }

    // Important part: 1st a jokhon string 1 silo, tokhon tar last index a null charecter '\0' silo. But akhon sei null er index a charecter dia replace kore diasi. So new str1 er last a null charecter ta manualy set kore dita hobe. Otherwise gurbase value output a diba. Karon oi string er ses kothai seita bujhte parbena compiler.
    str1[str1_len + j] = '\0';

    printf("%s", str1);

    return 0;
}