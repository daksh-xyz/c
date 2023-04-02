#include<stdio.h>

void main() {
    int i,j,sz,maxn,min;
    printf("Enter size of array: ");
    scanf("%d",&sz);
    int arr[sz];
    printf("Enter elements in the array: ");
    for (i=0;i<sz;i++){
        scanf("%d",&arr[i]);
    }
    maxn = arr[0];
    min = arr[0];
    for(i=0;i<sz;++i){
        if (maxn<arr[i]){
            maxn = arr[i];
        }
        if (min>arr[i]){
            min = arr[i];
        }
    }
    printf("Largest number in the given array is: %d\nSmallest number in the given array is: %d",maxn,min);
}