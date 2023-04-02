#include<stdio.h>
#include<math.h>

void main() {
    int n,i,x=1,rem=0,dec=0,chk=0,bin=0,flag,tm;
    printf("Enter a binary or decimal number: ");
    scanf("%d",&n);
    tm = n;
    while(tm!=0) {
        chk = tm%10;
        if (chk ==0 || chk == 1) {
            flag = 1;
        }
        else if(chk != 0 || chk != 1) {
            flag = 0;
            break;
        }
        tm = tm/10;
    }
    if (flag == 0){
        while (n!=0) {
            rem = n % 2;
            n /= 2;
            bin += rem * x;
            x *= 10;
        }
        printf("%d",bin);
    }
    else {
        while (n!=0) {
            rem = n%10;
            rem = rem*pow(2,i);
            n = n/10;
            dec = dec + rem;
            ++i;
        }
        printf("%d",dec);
    }
}