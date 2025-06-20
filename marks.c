#include <stdio.h>
int main(){
    int a,b,c;
    float total,average;
    char sub1[10],sub2[10],sub3[10];

    printf("Enter the marks and Subject 1 name :- ");
    scanf("%s%d",&sub1,&a);
    printf("Enter the marks and Subject 2 name :- ");
    scanf("%s%d",&sub2,&b);
    printf("Enter the marks and Subject 3 name :- ");
    scanf("%s%d",&sub3,&c);

    total = a + b + c;
    average = total/3;

    printf("The total of 3 subject is %f",total);
    printf("The Average is %.2f",average);

    if(average > 90)
    {
        printf("First Class");
    }

    else if (average > 80)
    {
        printf("Second Class");

    }

    else if (average > 70)
    {
        printf("Third Class");
    }

    else if (average > 60)
    {
        printf("Forth Class");
    }
    
    else
    {
        printf("Fail");
    }    
    return 0;
}