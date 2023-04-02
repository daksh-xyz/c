#include<stdio.h>

void replace(char c[]){
    int i,j;
    for(i=0;c[i]!='\0';i++){
        if(c[i]==' '&&c[i+1]==' '){
            for(j=i+1;c[j]!='\0';j++){
                c[j] = c[j+1];
            }
            i--;
        }
    }
}

void main() {
    int i,j;
    char c[20];
    printf("Enter a string: ");
    gets(c);
    replace(c);
    puts(c);
}
