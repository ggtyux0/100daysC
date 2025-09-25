// Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main(){
    float r, area, circum;
    const float pi = 3.14;

    printf("Enter Radius:");
    scanf("%f",&r);

    area = pi * r * r;
    circum = 2 * pi * r ;

    printf("Area = %.2f and Circumference = %.2f", area, circum);

    return 0;
}