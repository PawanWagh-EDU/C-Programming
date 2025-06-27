#include <stdio.h>
int main(){
    int a,n,i;

    printf("Enter the start no :-");
    scanf("%d",&a);

    printf("Enter the end no :-");
    scanf("%d",&n);

    for(i=a;i<=n;i++){
        printf("%d",i);
    }
    return 0;

}