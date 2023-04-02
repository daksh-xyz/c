#include<stdio.h>

//Q3.Write a program to interchange the values of two variables without using a third variable

void main() {
    int num1, num2;
    printf("\nEnter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("\nNUMBERS BEFORE SWAPPING:\nnum1 = %d, num2 = %d\n\n", num1, num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("NUMBERS AFTER SWAPPING:\nfirst number: %d\n",num1);
    printf("second number: %d",num2);
}