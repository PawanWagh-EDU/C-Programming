#include <stdio.h>
int main(){
    int i,n,sum;

    printf("Enter the no :-");
    scanf("%d",&n);

    sum = 0;
    
    for(i=2;i<=n;i +=2){
        printf("%d \n ",i);
        sum += i;
    }
    
    printf("%d \n ",sum);
    
    return 0;
}