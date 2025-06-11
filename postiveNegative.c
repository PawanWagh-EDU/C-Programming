#include<stdio.h>
int main(){
    int n;
    printf("Enter the no ");
    scanf("%d",&n);

    if(n>0)
    printf("The no in positive");

    else
    printf("The no  is Negative");

    //---By using Ternarry operator
    (n>0)? printf("The no in positive"): printf("The no in Negative");
    return 0;

}