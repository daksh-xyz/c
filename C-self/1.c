#include<stdio.h>

void operation(num1,num2);
void confirmation(sum,num1,num2);

void confirmation(sum,num1,num2) {
    char con;
    printf("Do you want to continue operation? ");
    if (con == 'y'){
        scanf("%d",&num2);
        Operation(sum,num2);
    }
    else {
        result(sum);
    }
}

void operation(num1,num2) {
    int sum;
    sum = num1 + num2;
    confirmation(sum);
}

void result() {
    int x;
    x = operation();
    printf("%d",x);
}

void main() {
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    operation(num1,num2);
    result();
}