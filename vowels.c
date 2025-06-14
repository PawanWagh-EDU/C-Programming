#include<stdio.h>

int main(){
char A;

    printf("Enter the Vowels :- ");
    scanf("%c",&A);

    if(A >= 'a' || A<= 'z'){
    if(A == 'a' || A == 'e' || A == 'i'|| A == 'o' || A =='u'){
        printf("The %c Letters Are Vowels",A);
    }
    else{
        printf("The %c Letters Are Constrants",A);

    }
    }
    else{
        printf("Enter the Lower Case ",A);
    }

}