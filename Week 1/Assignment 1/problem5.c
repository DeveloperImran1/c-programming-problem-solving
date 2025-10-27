// Problem 5 Link: https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-08/challenges/shopping-13

#include<stdio.h>
int main()
{
    int money;
    scanf("%d", &money);

    if(money > 1000){
        printf("I will buy Punjabi\n");
        money = money - 1000;
        
        if(money >=500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }else{
        printf("Bad luck!\n");
    }

    return 0;
}