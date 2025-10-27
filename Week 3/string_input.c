#include <stdio.h>
int main()
{
    // input dissi: Hello

    char name[10];
    scanf("%s", &name);

    // printf("%c", name[1]); // Output: e  --> array er jekono index holo, akta charecter. Tai print korar somoi type hisabe %c use koreci.

    // printf("%s", name);    // Output: Hello  --> Akbare full string print korar jonno %s use koresi.

    // printf("%c", name[6]); // Output: aikhane akta gurbege value print hobe, but seita charecter akare print hote parena. unicode akare hoi. Ta nicher niom a ASCII value print kore dekhbo.

    // printf("%d", name[6]); // charecter type er value ke, "%d" or int data type dia print korle, oi charecter er ASCII value print kore. aikhane output bivinno somoi different compiler a vinno vinno asbe.

    // [Note: Tahole string array kivabe bujhe, tar last index kothai ses? String ke jokhon amra declare kori, tokhon fixed akta length bole dei. ex: char name[10] aita 10 ta charecter nita parbe. Akhon input a jodi dei "Hello" tahole array ta hobe: {H, e, l, l, o, null, gurbage, gurbage, gurbage, gurbage} --> aita 0-4 index a main value set kore, Tarporer index a null set kore. Tarpor joto gulo index thake, sob index a gurbage value set kore. ]

    printf("%d", name[5]); // Output: 0 --> aita kono gurbage value noi, aita null value er ASCII man. Karon main array er 4 number index porjonto charecter ase. So 5 number index a null set korese. Ar string intelegently bujhte pare, null value paoer por sob gurbage value thakbe. Tai ar print korena.
    return 0;
}