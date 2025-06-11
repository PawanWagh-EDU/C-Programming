#include<stdio.h>
int main(){
    int  a,b;

    printf("Enter the Two no :-");
    scanf("%d%d",&a,&b);

    if(a<b){
        printf("The min no is :- %d",a);
    }
    else{
        printf("The min no is :- %d",b);
    }
    return 0;
}