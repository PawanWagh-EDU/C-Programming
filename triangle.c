#include <stdio.h>
int main(){
    int a,b,c;

    printf("Enter three sides of triangle :-");
    scanf("%d%d%d",&a,&b,&c);

    if(a+b > c && a+c > b && b+c > a){
        printf("The triangle is valid ");
    }
    else{
        printf("The Triangle Not Valid");
    }
    return 0;
}