//Write a program to Count set bits in a number. 
#include <stdio.h>

int main(){
    int i,setBits=0,n;

    printf("Enter a binary number to count its set bits(upto 8 digits): ");
    scanf("%lld", &n);

    for(i=n;i>0;i=i/10){
        if(i%10==1) setBits++;
    }
    printf("The number of setBits = %d\n", setBits);
}