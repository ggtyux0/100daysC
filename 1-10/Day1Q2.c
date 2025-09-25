// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient

#include <stdio.h>

int main(){
    int n1, n2, sum, diff, product, quotient;

    printf("Input:\n");
    scanf("%d %d",&n1,&n2);

    sum = n1 + n2;
    diff = n1 - n2;
    product = n1 * n2;

    if(n2!=0){
        quotient = n1/n2;
        printf("Sum = %d , Diff = %d , Product = %d , Quotient = %d", sum, diff, product, quotient);
    }
    else
      printf("Sum = %d , Diff = %d , Product = %d , Quotient = Unidentified", sum, diff, product);
    
      return 0;
}