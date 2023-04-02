// Write a program that returns a letter grade based on a quiz score. 
// The input will be the integer score from a ten-point quiz. 
// The letter grades are assigned by: 9 - 10 “A”; 7 - 8; “B” 5 - 6; “C” 3 - 4; “D” < 3; “F”

#include<stdio.h>

void main() {
    float N;
    printf("Enter your marks: ");
    scanf("%f",&N);
    if (N>10){
        printf("Invalid marks");
    }
    if (N>=9&&N<=10) {
        printf("Your grade is A");
    }
    else if (N>=7&&N<=8) {
        printf("Your grade is B");
    }
    else if (N>=5&&N<=6) {
        printf("Your grade is C");
    }
    else if (N>=3&&N<=4) {
        printf("Your grade is D");
    }
    else {
        printf("Your grade is F");
    }
}