#include<stdio.h>
#include<string.h>
#include<math.h>

void main() {
    int i,x,flag = 0;
    char c[100];
    printf("Enter a string: ");
    gets(c);
    x = strlen(c);
    x -= 1;
    for(i=0;i<x;i++){
        if (c[i]==c[x]){
            flag=1;
        }
        else if (c[i]!=c[x]) {
            flag = 0;
            break; 
        }
        x -= 1;
    }
    if (flag == 1){
        printf("Given string is a pallindrome");
    }
    else if (flag == 0){
        printf("Given string is not a pallindrome");
    }
}