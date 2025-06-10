#include <stdio.h>
#include <math.h>

int  main()
{
    float a, b, result;
    char op;

    printf("enter the No :-");
    scanf("%f%c%f",&a,&op,&b);

    if(op ==  '+')
    {
    result = a+b;
    printf("addition is %f",a+b);
    }

    else if(op == '-')
    {
    result = a-b;
    printf("Subtraction is %f",a-b);
    }

    else if(op == '*')
    {
    result = a*b;
    printf("Multiplication is %f",a*b);
    }

    else
    { 
    result = a/b;
    printf("Divide is %f",a/b);
    }


    return 0;

}