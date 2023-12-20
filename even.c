#include<stdio.h>
int main(){
     int input;
     printf("input your number: \n");
     scanf("%d",&input);
     if (input % 2 == 0)
     {
        printf("even");
     }else{
        printf("ODD");
     }
     

    return 0;
}