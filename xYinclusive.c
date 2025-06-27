#include <stdio.h>

int main(){
    int x,y,i;

    pirntf("Enter Start the no :-");
    scanf("%d",&x);

     pirntf("Enter End the no :-");
    scanf("%d",&y);

    for(i=x;i<=y;i++){
        printf("%d",i);
    }
    return 0;
}