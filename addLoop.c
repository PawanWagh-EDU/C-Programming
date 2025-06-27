#include <stdio.h>
int main(){
    int i,n,sum;

    printf("Enter the no :-");
    scanf("%d",&n);
    sum = 0;
    i=0;
    while(i<=n){
        sum += i;
        i++;
    }
    printf("%d",sum);

    return 0;
}