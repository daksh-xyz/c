// Q3. Write a program to program to input the number of week’s days (1-7) and translate to its equivalent name of the day of the week

#include<stdio.h>

void main() {
    int w;
    printf("Days of week with number codes: \n1.Sunday\n2.Monday\n3.Tuesday\n4.Wednesday\n5.Thursday\n6.Friday\n7.Saturday\nEnter Day code: ");
    scanf("%d",&w);
    switch (w) {
    case 1:
    printf("Sunday was chosen!");
    break;
    case 2:
    printf("Monday was chosen!");
    break;
    case 3:
    printf("Tuesday was chosen!");
    break;
    case 4:
    printf("Wednesdsay was chosen!");
    break;
    case 5:
    printf("Thursday was chosen!");
    break;
    case 6:
    printf("Friday was chosen!");
    break;
    case 7:
    printf("Saturday was chosen!");
    break;
    }
}