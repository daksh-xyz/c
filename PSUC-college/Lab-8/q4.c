#include<stdio.h>

void main() {
    int i,s,j,countP=0,countN=0,count0=0,countO=0,countE=0;
    printf("Enter size of array: ");
    scanf("%d",&s);
    int arr[s];
    printf("Enter elements in array: ");
    for (i=0;i<s;i++){
        scanf("%i",&arr[i]);
    }
    for(i=0;i<s;i++){
        if(arr[i]==0){
            count0++;

        }
        else if(arr[i]>0){
            countP++;
            
        }
        else if (arr[i]<0){
            countN++;
        }
        if (arr[i]%2==0){
            countE++;
        }
        if (arr[i]%2!=0){
            countO++;
        }
    }
    printf("\nnumber of positive numbers: %d \nNumber of odd numbers: %d \nNumber of even numbers: %d \nNumber of negative numbers: %d \nNumber of 0s: %d",countP,countO,countE,countN,count0);
}