#include<stdio.h>
int main(){

    int a =3;
    switch (a)
    {
    case 1 /* constant-expression */:
        printf("Hi\n");
        break;
    case 2 /* constant-expression */:
        printf("Hello\n");
        break;
    case 3 /* constant-expression */:
        printf("Bye\n");
        break;
    
    default:
     printf("Nothing\n");
        break;
    }
    return 0;
}