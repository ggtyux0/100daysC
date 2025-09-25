// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main(){
    int h, m, s;

    printf("Input time(in seconds):\n");
    scanf("%d", &s);

    h = s/3600;
    m = (s%3600)/60;
    s = (s%3600)%60;
    
    printf("Time =%d:%d:%d", h, m, s);

    return 0;

}