#include<stdio.h>

//Q4. Write a program to convert the temperature given in Fahrenheit to Centigrade

void main(){
    float c,f;
    
    printf("\n\nF= ");
    scanf("%f", &f);
    c=(5.0/9)*(f-32);
    printf("C= %.2f", c);
}