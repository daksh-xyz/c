#include<stdio.h>

// Write a program to find a alphabet is vowel or consonant.

void main() {
    char input;
    printf("Enter an alphabet: ");
    scanf("%c", &input);
    if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u') {printf("Entered alphabet is a vowel");}
    else (printf("Entered alphabet is a consonant"));
}