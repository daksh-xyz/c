#include<stdio.h>

void main() {
    int i,j,n,arr[10],rra[10];
    printf("Enter size of array: ");
    scanf("%d",&n);
    if (n>1) {
        printf("Adding elements in the array: \n");
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for (i=0;i<n;i++){
        printf("%d ",arr[i]);
        }
        i=n-1;
        while(i>0){
            for (j=0;j<n;j++){
                rra[j] = arr[i];
                i -= 1;
            }
        }
        printf("\nReversed array: \n");
        for (i=0;i<n;i++){
            printf("%d ",rra[i]);
        }
    }
}