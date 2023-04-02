//Q2
#include<stdio.h>

void main() {
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
    printf("\n");
    printf("printing the elements...\n");
    for(i=0;i<row;i++){
        printf("\n");
        for(j=0;j<column;j++){
            printf("%d\t", arr[i][j]);
        }
    }
    printf("\n\nEnter element to be searched: ");
    //searching for element
    scanf("%d",&ele);
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            if(arr[i][j] == ele){
                count++;
            }
        }
    }
    printf("%d was found %d time(s) in the given matrix",ele,count);
}