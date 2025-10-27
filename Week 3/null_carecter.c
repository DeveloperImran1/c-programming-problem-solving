#include <stdio.h>
int main()
{
    // Input: Imran

    char name[4]; // aikhane amra 4 size er or 3 index er akta string array declare korlam. But input hisabe 5 length er string dilam. Tahole string array er last index a null set korbe kivabe? Karon {I, m, r, n} --> array er 4 ta index ee string bose jabe. Tar mane input joto nibo, tar theke 1 length besi array er size nia rakhte hobe. Otherwise thikvabe kaj korbena. Jodio amade local machine a kaj kore, but online compiler ba realy aita kaj korbena.
    scanf("%s", &name);

    printf("%s", name); // Output: {I, m, r, n} --> nul kothai se hobe??

    // [Note: jodi input dewer somoi jodi kono gap pore. Ex: Imran Hasan --> Tahole sudho Imran ke niba, Hasan ke niba na. Karon strig array sudho akta word ke input nei.]

    // Tahole space soho string input newer 2 ta way ase. 1. gets(stringArrName); 2. fgets(stringArrName, inputLenth + 1, stdin);
    // aikhane 2 number fgets() holo standard way. so all time fgets() use korbo.
    char myIns[30];
    // scanf("%s", &myIns);  // scanf() er maddhome input nila, space pale next word ar input neina.
    // gets(myIns);  // aivabe space soho newa jai, but aita standard noi.

    fgets(myIns, 10, stdin); // aita use korbo. But fgets() er main issue holo, enter mare jodi nicher line a jai, tahole enter ke charecter vabe and output er new akta lince create kore. But enter er por thake word, sentence ke ar neina. (scanf -> space paile stop hoi. Ar fgets -> enter paile enter ke charecter hisabe nei and off hoi.)

    printf("%s", myIns);

    // [Note: String ke input newer somoi jodi kono space na thake, tahole scanf() use korbo. Ar jodi string input newer somoi space thake, tahole fgets() use korbo. fgets() enter kew charecter hisabe input nei and enter paile stop hoia jai.]
    return 0;
}