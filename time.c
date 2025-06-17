#include<stdio.h>

int main(){
    int h,m,s;

    printf("Enter the Hours :-");
    scanf("%d",&h);

    printf("Enter the Minutes :-");
    scanf("%d",&m);

    printf("Enter the Seconds :-");
    scanf("%d",&s);

    if(h > 0 && h < 24){
        if(m > 0 && m < 60)
            if(s > 0 && s < 60) {
                printf("The Time is Valid");
        }
            else{
                printf("The second is invalid");
            }
        else{
            printf("The Minutes is invalid");
        }
    }
    else{
        printf("The Hours is invalid");
    }
}

