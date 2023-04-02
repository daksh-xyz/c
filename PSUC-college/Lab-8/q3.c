#include<stdio.h>

void main() {
    printf("Index of arrays in this program start from 1!\n");
    int s,i,frm,to;
    printf("Enter size of array: ");
    scanf("%d",&s);
    int arr[s],arr2[s];
    printf("Enter elements in array: ");
    for (i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter starting Index: ");
    scanf("%d",&frm);
    printf("Enter end Index: ");
    scanf("%d",&to);
    frm-= 1;
    printf("\nSelected array is: ");
    for(i=frm;i<to;i++){
        arr2[i]=arr[i];
    }
    for(i=frm;i<to;i++){
        printf("%d ",arr2[i]);
    }
}