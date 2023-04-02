// Write a program to concatenate/length/copy two strings using the library function.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main() {
    int i,sl1,sl2;
    char s1[100],s2[100],s3[100];
    printf("Enter string1: ");
    gets(s1);
    printf("Enter string2: ");
    gets(s2);
    sl1 = strlen(s1);
    sl2 = strlen(s2);
    printf("Length of str1: %d \nLength of str2: %d\n",sl1,sl2);
    printf("Concatenating two strings: ");
    strcpy(s3,s1);  //copying string 1 into string 3 (a temporary string)
    strcat(s3,s2);
    printf("Concatenated string: %s",s3);
}