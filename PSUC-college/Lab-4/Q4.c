// Write a program to take two numbers as an input and find whether one number is a multiple of the other or not.
#include<stdio.h>

void main() {
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    if (num1%num2 == 0) {
        printf("First number is a multiple of second number");
    }
    else if (num2%num1 == 0) {
        printf("second number is a multiple of the first number");
    }
    else {printf("The given numbers are not divisible by one another");}
}