//Q4
#include <stdio.h>


int N=3; // matrix size

int isMagicSquare(int arr[N][N]) {
    int i, j;
    int sum = 0;
    int sum2 = 0;
  
    // check if sum of all rows is equal
    for (i = 0; i < N; i++) {
        sum = 0;
        for (j = 0; j < N; j++)
            sum += arr[i][j];
  
        if (i == 0)
            sum2 = sum;
  
        if (sum != sum2)
            return 0;
    }
  
    // check if sum of all columns is equal
    for (i = 0; i < N; i++) {
        sum = 0;
        for (j = 0; j < N; j++)
            sum += arr[j][i];
  
        if (sum != sum2)
            return 0;
    }
  
    // check if sum of both diagonals is equal
    sum = 0;
    for (i = 0; i < N; i++)
        sum += arr[i][i];
    if (sum != sum2)
        return 0;
  
    sum = 0;
    for (i = 0; i < N; i++)
        sum += arr[i][N - i - 1];
    if (sum != sum2)
        return 0;
  
    return 1;
}

int main() {
    int i,row,column,j,ele,count=0;
    printf("Enter number of rows: ");
    scanf("%d",&row);
    printf("Enter number of columns: ");
    scanf("%d",&column);
    int arr[row][column];
    //Entering data in matrix
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("arr[%d][%d]: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
  
    if (isMagicSquare(arr))
        printf("Given matrix is a magic Square\n");
    else
        printf("Given matrix is not a magic square\n");
  
    return 0;
}