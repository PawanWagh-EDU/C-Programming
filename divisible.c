#include <stdio.h>
int main()
{
    int a;

    printf("Enter the No :- ");
    scanf("%d", &a);
    if (a % 5 == 0)
    {
        printf("The no is divisible  by 5");
    }
    else if (a % 7 == 0)
    {
        printf("The no is divisible  by 7");
    }
    else
    {
        printf("The no is not divisible");
    }
    return 0;

    //---Using && operator---

    printf("Enter the No :- ");
    scanf("%d", &a);
    if (a % 5 == 0 || a % 7 == 0)
    {
        printf("The no is divisible  by 5 or 7");
    }
    else
    {
        printf("The no is not divisible");
    }
    return 0;
}
