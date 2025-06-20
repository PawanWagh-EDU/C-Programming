#include <stdio.h>
int main(){
    int X,Y;

    printf("Enter the X-Quadrant :-");
    scanf("%d%d",&X,&Y);

    if(X > 0 && Y > 0 ){
        printf("The x and y lies on First Quadrant");
    }
    else if (X < 0 && Y > 0)
    {
        printf("The x and y lies on Second Quadrant");
    }
    else if(X < 0 && Y < 0){
        printf("The x and y lies on Third Quadrant");
    }
    else if (X > 0 && Y < 0)
    {
        printf("The x and y lies on Forth Quadrant");

    }
    return 0;
}