// Problem 2 Link: https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-08/challenges/multiply-16-2

#include<stdio.h>
int main()
{
    int A;
    long long int B;
    // scanf("%d %lld", &A, &B);
    scanf("%d", &A);
    scanf("%lld", &A);

    long long int mul=A*B;
    printf("%lld", mul);

    return 0;
}

// Note: 
// 1. Aikhane A and B int hisabe input nita parbo. But output sudho int newa jabena. Karon multiple hole onek bigest number hote pare. So multiply er jonno long long int nita hobe.
// 2. Output jodi long long int hote hoi, tahole input gulor moddhe jekono akta variable ke long long int hote hobe, otherwise output fake asbe. So B ke long long int koresi.
// 3. Input newer somoi amra aivabe niasi: scanf("%d %lld", &A, &B);  --> Kinto aikhane jodi %d er por space na ditab or akta kore input 2 bare nitam. Tahole 1st input newer por amra keyboard er enter or space jei key chapi na keno. Sei 2nd key kei input hisabe niba. Tai ta input er moddhe space diasi. Ba aro akta function ase, seita use korte pari. Jar fole another space ke coount korbena.