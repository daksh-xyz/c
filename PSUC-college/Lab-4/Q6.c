// Write a program that takes three sides of a triangle input and calculates its area, 
// if these conditions are satisfied a+b>c, b+c>a, a+c>b, calculate area

#include<stdio.h>
#include<math.h>

void main() {
    int a,b,c,s,area,g,h,i;
    printf("Enter the sides of triangle: ");
    scanf("%d %d %d", &a,&b,&c);
    if (a+b>c&&b+c>a&&c+a>b) {
        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area is %d",area);
    }
    else {printf("Not a valid triangle");
    }
}