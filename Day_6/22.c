// Write a program to Convert binary to decimal. 
#include <stdio.h>

int main(){
    int n,i,dec=0,j=1;

    printf("Enter a binary number to convert it into decimal number: ");
    scanf("%d",&n);

    for(i=n;i>0;i=i/10){
        dec = dec + i%10*j;
        j*=2;
    }
    printf("Decimal number: %d\n",dec );
} 