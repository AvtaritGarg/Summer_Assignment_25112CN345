//Program to check whether a number is prime.

#include <stdio.h>

int main(){
    int num, i, prime=0;

    printf("Enter a number to check if its prime or not: ");
    scanf("%d", &num);

    if(num == 1||0) printf("The given number is not prime");
    else {
        for(i=1;i<=num/2;i++){
            if(num%i==0) prime++;
        }
        if(prime == 1) printf("The given number is prime.\n");
        else printf("The given number is not prime.\n");
    }
    printf("\n");
}