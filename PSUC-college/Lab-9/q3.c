//Q3
#include<stdio.h>
#include<stdlib.h>

void main() {
    int i,r1,c1,r2,c2,j;
    printf("Enter number of rows and columns of matrix 1 (r1xc1): ");
    scanf("%d %d",&r1, &c1);
    printf("Enter number of rows and columns of matrix 2 (r2xc2): ");
    scanf("%d %d",&r2, &c2);
    int arr1[r1][c1],arr2[r2][c2];
    if (c1 != r2){
        printf("Error! given matrices cannot be multiplied");
        exit(1);
    }
    //Entering data in matrix 1
    printf("Entering values in matrix 1...\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("arr[%d][%d]: ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Entering values in matrix 2...\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("arr[%d][%d]: ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    //initializing resultant matrix
    int prod[r1][c2];
    int Temp = 0;
    // Multiply the matrices
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                Temp += arr1[i][k] * arr2[k][j];
            }
            prod[i][j] = Temp;
            Temp = 0;
        }
    }
    // Print the result
    printf("Resultant matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", prod[i][j]);
        }
        printf("\n");
    }
    
}