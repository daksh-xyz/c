#include<stdio.h>

//Q5.Write a program to find the greatest and smallest of three numbers. (using ternary operator)

void main() {
    int num1, num2, num3,tempg,resultg,temps,resultS;
    printf("\nEnter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);
    tempg = (num1>num2) ? num1:num2;
    resultg = (num3>tempg) ? num3:tempg;
    printf("\n\nThe greatest number is: %d", resultg);
    temps = (num2>num1) ? num1:num2;
    resultS = (temps>num3) ? num3:temps;
    printf("\n\n\nThe smallest number is: %d\n\n", resultS);
}