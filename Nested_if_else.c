#include<stdio.h>
int main(){
     int x;
     printf("Enter your age: \n");
     scanf("%d",&x);
     if (x<2)
     {
        printf("Infant");

     }else if(x>=2 && x<10){
       printf("Child");

     }else if (x>=10 && x <20)
     {
        printf("Teenage");

     }else if (x>=20 && x<30)
     {
        printf("Adult");

     }else if (x>=30)
     {
        printf("Old");
     }
     
     
     
     

    return 0;
}