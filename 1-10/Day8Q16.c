// Q16: Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int main(){
    int a, b, c;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
if(a>=b&&a>=c){
    printf("%d is the largest number among the three.\n",a);
}
else if(b>=a&&b>=c){
    printf("%d is the largest number among the three.\n",b);
}
else 
printf("%d is the largest number among the three.\n",c);

return 0;

}