#include<stdio.h>
#include<math.h>

void main() {
    int MO,i,DC=0,Yr,sr=0;
    char Yrmo[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Enter number of months: ");
    scanf("%d", &MO);
    printf("Enter year: ");
    scanf("%d",&Yr);
    if (Yr%400 == 0){
        Yrmo[1] = 29;
    }
    else if (MO%4==0 && MO%100 != 0){
        Yrmo[1] = 29;
    }
    if (MO<=12){
        for(i=0;i<MO;i++) {
            DC = DC + Yrmo[i];
        }
    }
    else if (MO>12) {
        for(i=0;i<12;i++) {
            DC = DC + Yrmo[i];
        }
        MO = MO%12;
        sr= sr + MO;
        for(i=0;i<MO;i++) {
            DC = DC + Yrmo[i];
        }
    }
    printf("%d",DC);
}