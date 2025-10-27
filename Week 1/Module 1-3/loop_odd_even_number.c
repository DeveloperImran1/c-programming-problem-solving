#include<stdio.h>;

int main(){
    for(int i= 1; i<=10; i++){
      if(i % 2==0){
        printf("%d is Even number \n", i);
    }else{
          printf("%d is Odd number\n", i);

      }
    }
    return 0;
}