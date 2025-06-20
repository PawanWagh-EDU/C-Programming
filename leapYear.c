#include<stdio.h>
int main(){
    int a;

    printf("Enter the Year :- ");
    scanf("%d",&a);

    if(a % 4 == 0){
        printf("The leap year is :- %d",a);
    }
    else{
        printf("the year is not leap year ");
    }
    return 0;
}