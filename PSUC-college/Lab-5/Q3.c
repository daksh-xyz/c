#include<stdio.h>

//Q3 Write a program to find \n\nthe greatest and smallest\n\n of three numbers.

void main() {
    int num1, num2, num3;
    printf("\nEnter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);
    if (num1>num2 && num1>num3) {printf("\n\nFirst number is greatest\n\n");}
    else if (num2>num1 && num2>num3) {printf("\n\nSecond number is greatest\n\n");}
    else if (num3>num1 && num3>num2) {printf("\n\nThird number is greatest\n\n");}

    if (num2>num1 && num3>num1) {printf("\n\nFirst number is smallest\n\n");}
    else if (num1>num2 && num3>num2) {printf("\n\nSecond number is smallest\n\n");}
    else if (num1>num3 && num2>num3) {printf("\n\nThird number is smallest\n\n");}
}