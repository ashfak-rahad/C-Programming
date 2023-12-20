
// P-01 Take 3 integer variables named a,b and c . Scan the values
// of these three variabes from user.Then stor the average of these tree variables into anew float variable named average .Finally print the output like the following example:
// Value of a:10
// Value of b:40
// Value of c:20
// Average of a,b and c:30.00
#include<stdio.h>
int main(){
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);
    float average =(a+b+c)/3.0;
    printf("Value of a: %d\n",a);
    printf("Value of b: %d\n",b);
    printf("Value of c: %d\n",c);
    printf("Average of a,b and c: %.2f\n",average);
    
    

    return 0;
}