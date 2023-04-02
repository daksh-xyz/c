// Write a program to find the roots of a quadratic equation. Hint: root = -b +/- sqrt(b^2-4ac)/2a

#include<stdio.h>
#include<math.h>

void main() {
    int D;
    float a,b,c,x1,x2;
    printf("Enter coefficients of x of the quadratic equation ax^2+bx+c:\n");
    printf("a= ");
    scanf("%f",&a);
    printf("b= ");
    scanf("%f",&b);
    printf("c= ");
    scanf("%f",&c);
    printf("The quadratic equation is %fx^2+%fx+%f\n", a,b,c);
    D = sqrt(b*b-4*a*c);
    // printf("D= %lf",D);
    if (D==0) {
        x1 = (-b + D)/2.0*a;
        x1 = x2;
        printf("The roots of the given equation are: %f and %f",x1,x2);
    }
    if (D>0) {
        x1 = (-b+D)/2.0*a;
        x2 = (-b-D)/2.0*a;
        printf("The roots of the given equation are: %f and %f",x1,x2);
    }
    if (D<0) {
        printf("Roots are imaginary");
    }
}