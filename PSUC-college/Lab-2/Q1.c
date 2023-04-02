#include<stdio.h>

//Write a program to find the sum of the digits of a four-digit number (ex. 1234 sum=10) (without using a loop).

void main() {
    int sum=0,num,w,x,y,z;
    printf("Enter a 4 digit number: ");
    scanf("%d", &num);
    w = num%10;
    sum = sum + w;
    w = num/10;
    x = w%10;
    sum = sum + x;
    x = w/10;
    y = x%10;
    sum = sum + y;
    y = x/10;
    z = y%10;
    sum = sum + z;
    printf("sum of digits = %d", sum);
}