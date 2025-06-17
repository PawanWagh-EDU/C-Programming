#include<stdio.h>
int main(){
    int id;
    char name[100];
    float id,bs,da,hra,tax,totalsalary,inhand;
    
    printf("Enter the Employee details \n");
    printf("Id");
    scanf("%d",&id);

    printf("Name of Employee");
    scanf("%f",&name);

    printf("basic salary");
    scanf("%f",&bs);

    printf("Daily allounce");
    scanf("%f",&da);
    
    printf("Housing rate allounce ");
    scanf("%f",&hra);

    if (bs >= 200000){
        printf("tax 20 ");
    }
    else if(bs >= 150000){
        printf("tax 20 ");
    }
    else if(bs >= 80000){
        printf("tax 5");
    }
    else if(bs >= 50000){
        printf("tax 3");
    }
    else{
        printf("Tax 0");
    }


}
// accept three product details like id name quantity price 
// Display discount in percentage discount in price total price
// after discount (in tabular form)