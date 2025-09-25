// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main(){
    int a, b, c;

    printf("Input the lengths:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a==b && b==c){
        printf("Triangle is equilateral");
    }
    else if(a==b||a==c){
        printf("Triangle is isosceles.\n");
    }
    else 
    printf("Triangle is scalene.");

    return 0;
}