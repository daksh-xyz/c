#include<stdio.h>

void main() {
    int i,j,n,temp,count1,count0,countn;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nNew array:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n%d is the largest number in the given array",arr[n-1]);
    printf("\n%d is the smallest number in the given array",arr[0]);

    for (i=0;i<n;i++){
        if(arr[i]>0){
            count1++;
        }
        else if (arr[i]==0){
            count0++;
        }
        else if (arr[i]<0){
            countn++;
        }
    }
    printf("\n%d of the given numbers are positive, %d of them are equal to 0 and %d are negative",count1,count0,countn);
}