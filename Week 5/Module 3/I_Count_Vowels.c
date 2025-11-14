#include <stdio.h>
#include <string.h>

int count_vowel(char str[], int index)
{

    // Jokhon last index ba null charecter a jassi, tokhon 0 return kortesi. Jarfole sobar last a jeikhane count_vowel ke call kora hoiase, seikhane 0 output diba.
    if (str[index] == '\0')
    {
        return 0;
    }

    // index++;  // aivabe plus korle, index er man 1 hoia jasse 1st time. but 1st time a age 0 howa jabena. Tai call korar somoi index+1 kore diasi.

    int current_sum = count_vowel(str, index + 1); // 1st a 0 asbe.

    if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u' || str[index] == 'A' || str[index] == 'E' || str[index] == 'I' || str[index] == 'O' || str[index] == 'U')
    {
        current_sum++;
    }

    return current_sum;
}
int main()
{
    char str[201];
    fgets(str, 201, stdin);

    int result = count_vowel(str, 0);
    printf("%d", result);

    return 0;
}