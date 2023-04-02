#include <stdio.h>

void main() {
    int i, j, k, N,o=2,p=1;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Checking even or odd
        if (i%2==1){
            k = p;
        }
        else {
            k = o;
        }
        for(j=1; j<=i; j++, k+=2) {
            printf("%d ", k);
        }
        // Updating value of k
        if (k%2==1) {
            p=k;
        }
        else{
            o=k;}
        printf("\n");
    }
}