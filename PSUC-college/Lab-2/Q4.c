#include<stdio.h>

//Q4.Write a program to check whether the given number is odd or even.

void main() {
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    num = num%2;
    if (num == 1) {
        printf("\nnumber is odd");
    }
    else {
        printf("\nnumber is even");
    }
}