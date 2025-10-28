// Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main(){
    float cp, sp;

    printf("Enter Cost price and then Selling price:\n");
    scanf("%f %f", &cp, &sp);

    if(sp>cp){
        printf("Profit %.2f%%",((sp-cp)/cp * 100));
    }
    else if(cp>sp){
        printf("Loss %.2f%%",((cp-sp)/cp * 100));
    }   
    else 
    printf("No profit No loss");

    return 0;
    
}