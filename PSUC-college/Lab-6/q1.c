#include<stdio.h>

void main() {
    int N,i;
    printf("Enter any number: ");
    scanf("%d",&N);
    for(i=N;i>0;i--){
        if (i%2!=0){
            printf("%d ",i);
        }
    }
}