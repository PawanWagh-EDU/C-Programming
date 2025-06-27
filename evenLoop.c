//-----Using for loop if else statement
#include <stdio.h>
int main()
{
        int n, i, sum = 0;

        printf("Enter the No :-");
        scanf("%d", &n);

        for (i = 0; i <= n; i++)
        {
                if (n % 2 == 0)
                {
                        printf("Even no is %d", n);
                }
                else
                {
                        printf("Odd no is %d", n);
                }
        }
        //--------Using for loop for even no in simple step
        for (i = 2; i <= n; i = i + 2)
        {
                printf("Even no is %d", i);
        }
        //---------using for loop for  odd no in simple step
        for (i = 1; i <= n; i = i + 2)
                printf("Odd no is %d", i);
}

//------------Using for loop we add Even no

        for (i = 2; i <= n; i += 2)
        {
                printf("%d", i);
                sum += i;
        }
        printf("%d", sum);

//----------Using for loop we add even no form 100 to 200

        for (i=100;i<=200;i+=2){
                printf("%d",i);
                sum += i;
        }
        printf("%d",sum);