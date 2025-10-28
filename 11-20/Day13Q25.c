//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main(){
    int n1, n2, o;
    char a;

    printf("Input the arithmetic operation:\n");
    scanf("%d %c %d", &n1, &a, &n2);

    switch (a){
    case '+':
        o = n1 + n2;
        printf("%d", o);
        break;

    case '-':
        o = n1 - n2;
        printf("%d", o);
        break;

    case '*':
        o = n1 * n2;
        printf("%d", o);
        break;

    case '/':
     if(n2!=0){
        o = n1/n2;
        printf("%d", o);
     }
     else{
        printf("Unidentified.");
     }
        break;
    case '%':
    if(n2!=0){
        o = n1 % n2;
        printf("%d", o);
    }
    else{
        printf("Modulo by zero");
    }
        break;
    
    default:
    printf("Invalid Operator Input.");
    break;
}
return 0;
}