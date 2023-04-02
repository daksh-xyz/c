#include<stdio.h>

//Write a program to interchange the values of two variables using a third variable.

void main() {
    int num1, num2, temp;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("First number: %d\n", num1);
    printf("Second number: %d", num2);
}