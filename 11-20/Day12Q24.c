/* Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit */

#include <stdio.h>
int main(){
    int unit, c;

    printf("Units consumed:\n");
    scanf("%d", &unit);

    switch(unit/100){
        case 0:
        c = unit * 5;
        break;

        case 1:
        c = 500 + (unit-100) * 7;
        break;

        case 2:
        c = 1200 + (unit - 200) * 10;
        break;

        default:
        c = 2200 + (unit - 300) * 12;
        break;
    }
    printf("Bill = %d",c);

    return 0;
}