#include<stdio.h>;

int main(){
    for(int i= 1; i<=100; i++){
        if(i == 21){
            break;
        }else if(i== 10){
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}