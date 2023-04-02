#include<stdio.h>
#include<stdlib.h>

void main() {
    int i,j,r1=3,c1=3,sum,sum2=0,flag = 1;
    // printf("Enter number of rows and columns (r1xc1) of matrix 1: ");
    // scanf("%d %d", r1,c1);
    int arr[3][3] = {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}};
    //Entering data in matrix
    // for(i=0;i<r1;i++){
    //     for(j=0;j<c1;j++){
    //         printf("arr[%d][%d]: ");
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    //chcek if sum of all rows are equal
    for(i=0;i<r1;i++){
        sum = 0;
        for(j=0;j<c1;j++){
            sum += arr[i][j];
        }
        if (i==0){
            sum2 = sum;
        }
        if (sum != sum2){
            printf("Given matrix is not a magic square");
            exit(1);
        }
        else{
            flag = 1;
        }
    }
    //check if sum of all columns are equal
    for(i=0;i<r1;i++){
        sum = 0;
        for(j=0;j<c1;j++){
            sum += arr[j][i];
        }
        if (i==0){
            sum2 = sum;
        }
        if (sum != sum2){
            printf("Given matrix is not a magic square");
            exit(1);
        }
        else{
            flag = 1;
        }
    }
    // check if sum of both diagonals is equal
    sum = 0;
    for (i = 0; i < r1; i++){
        sum += arr[i][i];
        if (sum != sum2){
            printf("Given matrix is not a magic square");
            exit(1);
        }
        else{
            flag = 1;
        }
    }
  
    sum = 0;
    for (i = 0; i < r1; i++){
        sum += arr[i][r1 - i - 1];
        if (sum != sum2){
            printf("Given matrix is not a magic square");
            exit(1);
        }
        else{
            flag = 1;
        }
    }
    if (flag == 1){
        printf("Given matrix is a magic square!");
    }
}