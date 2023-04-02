#include<stdio.h>
#include<math.h>

void main() {
    int n,i=0,ch,rem=0,bin[32],x=1,dec=0;
    printf("Convert input into: \n1)Binary\n2)Decimal\n");
    scanf("%d",&ch);
    printf("Enter Value: ");
    scanf("%d",&n);
    if (ch == 1) {
        int i = 0;
        while (n > 0) {
        // storing remainder in binary array
            bin[i] = n % 2;
            n = n / 2;
            i++;
        }
        // printing binary array in reverse order
        for (int j = i - 1; j >= 0; j--){
            printf("%d", bin[j]);
        }
    }
    // For 5 digit decimal values only
    else if (ch == 2) {
        while (n > 0){
            dec += (n % 10) * pow(2, i);
            n /= 10;
            i++;
        }
        printf("%d",dec);
    }
}