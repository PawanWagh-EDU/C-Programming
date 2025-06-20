#include <stdio.h>
int main(){
    int a,b;

    printf("Enter any two No :- ");
    scanf("%d%d",&a,&b);

    if(a>b){
        printf("The %d is Greater than %d",a,b);
    }
    else if(b>a){
        printf("The %d is Smaller than %d",a,b);
    }
    else{
        printf("Bothe are Equal No");
    }

    return 0;

}