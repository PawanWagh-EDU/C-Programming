#include<stdio.h>
int main(){
    int a;

    printf("Enter the No :- ");
    scanf("%d",&a);

    if(a % 2 == 0){
        printf("The No is Even %d",a);
    }
    else{
        printf("The no is Odd %d",a);
    }
    return 0;

    //--- Using Ternary opertor

    (a % 2 == 0)?printf("The no is Even %d",a):printf("The no is Odd %d",a);
}