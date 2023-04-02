// Write a program to calculate the discount in rupees for the following criterion.
// Cost price           discount
// >=800                  25%
// 500-800                20%
// <500             no discount (0%)

#include<stdio.h>

void main() {
    float cp,sp;
    printf("Enter cost price: ");
    scanf("%f",&cp);
    if (cp>=800) {
        sp = cp - cp*0.25;
        printf("Discounted price: %.2f",sp);
    }
    else if (cp>=500&&cp<800) {
        sp = cp - cp*0.2;
        printf("Discounted price: %.2f",sp);
    }
    else if (cp<500) {
        printf("Discounted price: %.2f",cp);
    }
}