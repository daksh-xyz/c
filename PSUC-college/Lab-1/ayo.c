#include<stdio.h>


void main(){
    int a, b, sum, side, area;
    float p,r,t,SimpleInterest,c,f,mm,cm,in,ft;


 //Q1. Write a program to add two numbers


    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    sum = a + b;
    printf("%d", sum);


 //Q2. Write a program to find the area of square


    printf("\n\nside= ");
    scanf("%d", &side);
    area = side*side;
    printf("area = %d", area);

 
 //Q3. Write a program to find simple interest


    printf("\n\nPrincipal Amount= ");
    scanf("%f", &p);
    printf("Rate of Interest= ");
    scanf("%f", &r);
    printf("Time= ");
    scanf("%f", &t);
    SimpleInterest= (p*r*t)/100.0;
    printf("Interest= %.2f", SimpleInterest);


 //Q4. Write a program to convert the temperature given in Fahrenheit to Centigrade


    printf("\n\nF= ");
    scanf("%f", &f);
    c=(5.0/9)*(f-32);
    printf("C= %.2f", c);


 //Q5. Write a program for converting distance in mm to cm, inch, feet


    printf("\n\ndistance in mm= ");
    scanf("%f", &mm);
    cm = mm/ 10.0;
    printf("\ndistance in cm= %.2f", cm);
    in = cm / 2.5;
    printf("\ndistance in inch= %.2f", in);
    ft = in / 12.0;
    printf("\ndistance in feet= %.2f", ft);
}