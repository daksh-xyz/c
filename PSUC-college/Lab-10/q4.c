// Write a program to count the number of words in a sentence.
#include<stdio.h>

void main() {
    int i,count=0;
    char s[100];
    printf("Enter a string: ");
    gets(s);
    for(i=0;s[i]!='\0';i++){
        if (s[i] != ' ' && s[i+1] == ' ' || s[i+1] == '\0'){
            count++;
        }
        else {
            continue;
        }
    }
    printf("Number of words: %d",count);
}