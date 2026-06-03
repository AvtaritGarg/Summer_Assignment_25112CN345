// Write a program to Convert decimal to binary. (assuming natural inputs)

#include <stdio.h>

int main(){
    int n,i;
    long long bin=0;
    long long j=1;

    printf("Enter a number to convert it to binary: ");
    scanf("%d", &n);

    for(i=n;i>0;i=i/2){
        if(i%2==1) bin = bin + j;
        j = j*10;
    }
    printf("Binary: %lld\n",bin);

}