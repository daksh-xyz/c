#include<stdio.h>
#include<string.h>

void main() {
    int i,x=0;
    char s[100];
    printf("Enter a string:");
    gets(s);
    x = strlen(s);
    char rs[x];
    for(i=0;s[i]!='\0';i++){
        if (x>0){
            x--;
            rs[x] = s[i];
        }
    }
    printf("%s",rs);
}