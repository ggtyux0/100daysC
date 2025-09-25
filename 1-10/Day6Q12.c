// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main(){
    int a;
    printf("Input:\n");
    scanf("%d", &a);

    if(a == 0){
        printf("Input is Zero.\n");
    }
    else{
        if(a>0){
            printf("Input is Positive.\n");
        }
        else{
            printf("Input is Odd.\n");
        }
    }

return 0;              
}