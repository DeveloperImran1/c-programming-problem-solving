#include <stdio.h>
#include <limits.h>

int main()
{
    int loop_size;
    scanf("%d", &loop_size);

    int mx = 0;
    int inputNum;

    for (int i = 1; i <= loop_size; i++)
    {
        scanf("%d", &inputNum);
        if (mx < inputNum)
        {
            mx = inputNum;
        }
    }
    printf("%d", mx);

    return 0;
}