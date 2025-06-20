#include <stdio.h>
#include <ctype.h>

int main(){
    char a;

    printf("Enter the Number or Alphaber");
    scanf("%c",&a);

    if(isalpha(a)){
        printf("the Alphabet");
    }
    else if(isdigit(a)){
        printf("The digit");
    }
    else{
        printf("Invalid keywords");
    }
    return 0;
}