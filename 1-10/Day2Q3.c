// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main(){
    int l, b, a, p;
    
    printf("Input length and breadth respectively:\n");
    scanf("%d %d",&l,&b);

    a = l*b;
    p = 2*(l+b);

    printf("Area = %d and Perimeter = %d",a ,p);

    return 0;
}
