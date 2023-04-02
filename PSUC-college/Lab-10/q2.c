// Write a program to find the last occurrence of a particular character.
#include<stdio.h>
#include<string.h>

void main() {
    int i,flag=0;
    char s[100],find;
    printf("Enter a string: ");
    gets(s);
    printf("Enter the character you want to find: ");
    scanf("%c",&find);
    for(i=0 ; s[i]!='\0' ; i++){
        if (s[i]==find){
            flag = i;
        }
    }
    if (flag!=0){
        printf("The character (%c) was found at index (%d)",find,flag+1);}
    else if (flag == 0){
        printf("The character you are searching for wasn't found!");
    }
}