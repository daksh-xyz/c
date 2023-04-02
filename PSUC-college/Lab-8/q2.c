#include<stdio.h>

void main() {
    int i,s;
    printf("Enter size of array: ");
    scanf("%d",&s);
    int arr[s],sum=0;
    printf("Enter elements in array: ");
    for (i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    for (i=1;i<s;i+=2){
        sum += arr[i];
    }
    printf("Sum of odd indexes is: %d",sum);
}