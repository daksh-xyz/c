// Write a program to check whether a given year is a leap year or not.

#include<stdio.h>

void main() {
    int year;
    printf("enter year: ");
    scanf("%d",&year);
    if (year%400==0) {
        printf("Given year is a leap year");
    }
    else if (year%4==0 && year%100!=0){
            printf("Given year is a leap year");
        }
    else if (year%400!=0) {printf("Given year is not a leap year");}
}