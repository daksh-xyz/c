#include<stdio.h>

void main() {
    int r,i,j,k=1;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        for(j=1;j<=i;j++) {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}