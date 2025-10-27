#include <stdio.h>
int main()
{
    int a[4] = {10, 20, 30, 40};           // int arra initialize
    char s[6] = {'I', 'm', 'r', 'a', 'n'}; // aikhane s array er moddhe element ase 5 ta. Tar mane array er size dita hobe 5+1 = 6 ta. Jodi kom dei ba 5 dei, tahole gurbage value set korbe. Thikvabe kaj korbena. But int er khetre kinto airokom noi. Jei koita element, array er size oo sei koitai thakbe. Remember: array er mddhe charecter likhar somoi single quttation use korte hobe. not double cot.

    // printf("%s", s);

    // Tahole string er super power koi?
    char newString[30] = "Md Imran Hossen"; // int ke kinto airokom aksathe likha jetona. Akta akta kore array er element hisabe add korte hoto. But string a Double cot er moddhe akadhik word ke likha jai and seita space kew handle kore. But string er size theke length minimum 1 besi dita hobe.
    printf("%s", newString);

    return 0;
}