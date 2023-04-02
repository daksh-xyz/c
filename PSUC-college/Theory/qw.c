#include<stdio.h>
#define SIZE
void main() {
    int x;
    float arr[ ] = {12.4, 2.3, 4.5, 6.7};
    x = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",x);
}