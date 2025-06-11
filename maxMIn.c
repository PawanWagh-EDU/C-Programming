#include<stdio.h>

int main(){
    int a,b;

    printf("Enter the any two no :- \n");
    scanf("%d%d",&a,&b);

    if(a>b){
        printf("The Maximum No is :- %d",a);
    }
    else if(a<b){
        printf("The Minimum No is :- %d \n",b);
    }
    else if(a=b){
        printf("The No are equal := %d",a);
    }
    return 0;
}