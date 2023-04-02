#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main() {
    int inp,x,i,ndig=0,n,ones,tens,hundreds,thousands,th,h,t,o;
    printf("Enter a number: ");
    scanf("%d",&inp);
    n = inp;
    while(n!=0)  
    { 
        n /= 10;  
        ndig++;  
    }
    th = inp;
    h = inp;
    t = inp;
    o = inp;
    if (ndig == 1){
        ones = o%10;}
    if (ndig ==2){
        ones = o%10;
        tens = t/10;
        tens %= 10;}
    if (ndig == 3){
        ones = o%10;
        tens = t/10;
        tens %= 10;
        hundreds = h/100;
        hundreds %= 10;}
    if (ndig == 4){
        ones = o%10;
        tens = t/10;
        tens %= 10;
        hundreds = h/100;
        hundreds %= 10;
        thousands = th/1000;
        thousands %=10;}
   
   switch (thousands)
        {
        case 1:
            printf("one thousand ");
            break;
        case 2:
            printf("two thousand ");
            break;
        case 3:
            printf("three thousand ");
            break;
        case 4:
            printf("four thousand ");
            break;
        case 5:
            printf("five thousand ");
            break;
        case 6:
            printf("six thousand ");
            break;
        case 7:
            printf("seven thousand ");
            break;
        case 8:
            printf("eight thousand ");
            break;
        case 9:
            printf("nine thousand ");
            break;      
        default:
            break;
    }    
    switch (hundreds)
        {
        case 1:
            printf("one hundred ");
            break;
        case 2:
            printf("two hundred ");
            break;
        case 3:
            printf("three hundred ");
            break;
        case 4:
            printf("four hundred ");
            break;
        case 5:
            printf("five hundred ");
            break;
        case 6:
            printf("six hundred ");
            break;
        case 7:
            printf("seven hundred ");
            break;
        case 8:
            printf("eight hundred ");
            break;
        case 9:
            printf("nine hundred ");
            break;      
        default:
            break;
    }
    if (tens == 1) {
        switch (ones)
        {
            case 1:
                printf("eleven");
                break;
            case 2:
                printf("twelve");
                break;
            case 3:
                printf("thirteen");
                break;
            case 4:
                printf("fourteen");
                break;
            case 5:
                printf("fifteen");
                break;
            case 6:
                printf("sixteen");
                break;
            case 7:
                printf("seventeen");
                break;
            case 8:
                printf("eighteen");
                break;
            case 9:
                printf("nineteen");
                break;      
            default:
                break;
            }
            exit(0);
        }
        switch (tens)
        {
        case 2:
            printf("twenty ");
            break;
        case 3:
            printf("thirty ");
            break;
        case 4:
            printf("forty ");
            break;
        case 5:
            printf("fifty ");
            break;
        case 6:
            printf("sixty ");
            break;
        case 7:
            printf("seventy ");
            break;
        case 8:
            printf("eighty ");
            break;
        case 9:
            printf("ninety ");
            break;
        }
        switch (ones)
        {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;      
        default:
            break;
    }
}