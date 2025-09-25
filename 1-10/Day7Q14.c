// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
int main(){
    char a;

    printf("Enter your charecter:\n");
    scanf("%c", &a);

    if(a!='a'&& a!='e'&& a!='i'&& a!='o'&& a!='u'&& a!='A'&& a!='E'&& a!='I'&& a!='O'&& a!='U'){
        printf("Consonant.\n");
    }
    else 
    printf("Vowel.");

    return 0;

}