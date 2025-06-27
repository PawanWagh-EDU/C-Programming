#include <stdio.h>
int main(){
    int n,i,sum=0;

    printf("Enter the No :-");
    scanf("%d",&n);

    // for(i=0;i<=n;i++){
    //     if(n%2==0){
    //         printf("Even no is %d",n);
    //     }
    //     else{
    //         printf("Odd no is %d",n);

    //     }
    // }

    for(i=2;i<=n;i = i+2){
            printf("Even no is %d",i);
             sum = sum + i;

    }
            printf("\n total is  %d",sum);

     for(i=1;i<=n;i = i+2)
    printf("Odd no is %d",i);

    }