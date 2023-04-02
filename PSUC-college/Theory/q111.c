#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void main() {
    int i,l;
    char a[100];
    printf("Enter string: ");
    gets(a);
    l= strlen(a);
    printf("%c. ",toupper(a[0]));
    for(i=0;i<l;i++){
        if(a[i] == ' ' && a[i+1] != ' '){
            printf("%c. ",toupper(a[i+1]));
        }
        else {continue;}
    }
}