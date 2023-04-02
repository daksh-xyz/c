#include<stdio.h>

void main() {
    int n,i,count = 0;
    printf("Enter any number: ");
    scanf("%d",&n);
    if (n==0 || n==1){
        printf("Number is neither prime nor composite");
    }
    for (i=2;i<=n/2;i++){
        if (n%i==0){
            count = 1;
            break;
        }
    }
    if (count != 0){
        printf("%d is not a prime number",n);
    }
    else {
        printf("%d is a prime number",n);
    }
}