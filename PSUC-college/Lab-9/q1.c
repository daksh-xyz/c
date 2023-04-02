//Q1
#include<stdio.h>

void main() {
    int i,row=3,column=5,j,total;
    int arr[row][column];
    //Entering data in matrix
    for(i=0;i<row;i++){
        printf("Enter marks for student: %d\n",i+1);
        for(j=0;j<column;j++){
            printf("subject %d: ",j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("printing the elements...\n");
    for(i=0;i<row;i++){
        printf("\nstudent %d: ",i+1);
        for(j=0;j<column;j++){
            printf("%d\t", arr[i][j]);
        }
    }
    printf("\n\n");
    //Total marks of each student
    for(i=0;i<row;i++){
        total = 0;
        for(j=0;j<column;j++){
            total += arr[i][j];
        }
        printf("Total marks for student %d: %d\n",i+1,total);
    }
    printf("\n");
    //Average marks of each subject
    for(i=0;i<column;i++){
        total = 0;
        for(j=0;j<row;j++){
            total += arr[j][i];
        }
        printf("Average marks of subject %d: %.2f\n",i+1,(float)total/row);
    }
}