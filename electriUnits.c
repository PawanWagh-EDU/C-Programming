#include<stdio.h>
int main(){
    int units;
    float amount;

    printf("Enter the Units :- ");
    scanf("%d",&units);

    if(units > 100){
        amount = 100*8;
        units = units - 100;

        if(units >= 100){
        amount = amount+(100*10);
        units = units -100;

            if(units >= 100){
            amount = amount+(100*12);
            units = units -100;

                if(units >= 100){
                amount = amount+(100*15);
                units = units -100;
                }

                if(units = 0){
                    amount = amount +(units * 17);
                }

                else
                amount = amount + (units + 15);
                
            }
            else
                amount = amount + (units + 12);

            }
        else
                amount = amount + (units + 10);

            }
    else
                amount = amount + (units + 8);
                printf("Amount is %.2f ",amount);

            return 0;
}
    
    
    
