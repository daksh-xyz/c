// 1. Write a program to program to calculate an area of a circle, a rectangle, or a triangle depending on the user’s choice.

#include<stdio.h>
#include<math.h>

void main() {
    int ch;
    float r,area,l,br,a,b,c,s;
    printf("Choose a figure to calculate area of: \n1.Circle \n2.Rectangle \n3.Triangle\nEnter choice number: ");
    scanf("%d",&ch);
    switch (ch) {
        case 1:
        printf("Now calculating area of Circle...\nEnter radius of a circle: ");
        scanf("%f",&r);
        area = 3.14*r*r;
        printf("Area of given circle is: %.2f\n",area);
        break;
        case 2:
        printf("Now calculating area of Rectangle...\nEnter length and breadth of rectangle: ");
        scanf("%f %f",&l,&br);
        area = l*br;
        printf("Area of given rectangle is: %.2f\n",area);
        break;
        case 3:
        printf("Now calculating area of Triangle...\nEnter three sides of a triangle: ");
        scanf("%f %f %f",&a,&b,&c);
        if (a+b>c && a+c>b && b+c>a){
            s = (a+b+c)/2;
            area = sqrt(s*(s-a)*(s-b)*(s-c));
            printf("Area of given triangle is: %.2f\n",area);
        }
        else{printf("Entered sides do not form a triangle");}
    }
}