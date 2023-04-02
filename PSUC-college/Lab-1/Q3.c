#include<stdio.h>

//Q3. Write a program to find simple interest

void main() {
    float p,r,t,SimpleInterest;

    printf("\n\nPrincipal Amount= ");
    scanf("%f", &p);
    printf("Rate of Interest= ");
    scanf("%f", &r);
    printf("Time= ");
    scanf("%f", &t);
    SimpleInterest= (p*r*t)/100.0;
    printf("Interest= %.2f", SimpleInterest);
}