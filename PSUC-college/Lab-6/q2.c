#include<stdio.h>

void main() {
    int N,i,n1=0,n2=1,sum=1;
    printf("Enter number of terms:  ");
    scanf("%d",&N);
    printf("Fibonacci sequence: %d, %d ",n1,n2);
    for (i=3;i<=N;i++){
        printf(",%d ",sum);
        n1 = n2;
        n2 = sum;
        sum = n1 + n2;
    }
}