#include<stdio.h>

//Q5. Write a program for converting distance in mm to cm, inch, feet

void main() {
    float mm,cm,in,ft;

    printf("\n\ndistance in mm= ");
    scanf("%f", &mm);
    cm = mm/ 10.0;
    printf("\ndistance in cm= %.2f", cm);
    in = cm / 2.5;
    printf("\ndistance in inch= %.2f", in);
    ft = in / 12.0;
    printf("\ndistance in feet= %.2f", ft);
}