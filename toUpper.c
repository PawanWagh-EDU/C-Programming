#include <stdio.h>

int main(){
    char word;

    printf("Enter the Words :- ");
    scanf("%c",&word);

    if(islower(word)){
        word = isupper(word);
    }
    else if(isupper(word)){
        word = tolower(word);
    }
    else{
        printf("Not the an Alphabet");
    }

    printf("%c",word);
}