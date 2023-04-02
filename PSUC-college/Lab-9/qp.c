#include<stdio.h>

void main() {
    int i,number,flag=1,temp,numberArray[4];
    printf("Enter a 4-digit number:");
    scanf("%d",&number);
    temp = number;
    while (temp != 0){
        numberArray[i] = temp % 10;
        temp /= 10;
        i++;
    }
    temp = numberArray[0];
    for(i=0;i<4;i++){
        if (numberArray[i]!=temp){
            flag = 0;
            break;
        }
        else if(numberArray[i]==temp){
            flag =1;
        }
    }
    if (flag==1){
        printf("Digits are same");
    }Q I
    else{
        printf("Digits are not same");
    }
}
