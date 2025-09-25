// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
int main(){
    char a;
    printf("Enter a charecter:\n");
    scanf("%c", &a);

    if( a >= 'A' && a <= 'Z'){
        printf("Input is Uppercase Alphabet.\n");
    } 
    else if( a >= 'a' && a <= 'z'){
        printf("Input is Lowercase Alphabet.\n");
    }
    else if( a >= 0 && a <= 9){
        printf("Input is Digit.\n");
    }
    else 
    printf("Input is a special charecter.");

    return 0;
    }
