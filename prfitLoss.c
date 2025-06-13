#include<stdio.h>

int main(){
    int sellingprice, costprice, profit,loss;

    printf("Enter The Cost Price :- ");
    scanf("%d",&costprice);

    printf("Enter the Selling Price :- ");
    scanf("%d",&sellingprice);

    if( sellingprice >= costprice){
        profit=sellingprice-costprice;
        printf("The profit is :- %d \n", profit);
    }
    else{
        loss=costprice-sellingprice;
        printf("The loss is ;- %d",loss);
    }
    return 0;

}