//Write a program to Write function to check prime.

#include <stdio.h>

int checkPrime(int n){
    int i,prime = 0;

    for(i=2;i<=n/2;i++){
        if(n%i==0){
            prime = 1;
            break;
        }
    }
    return prime;
}

int main(){
    int n,prime=-1;

    printf("Enter a number to check whether its prime or not: ");
    scanf("%d", &n);

    prime = checkPrime(n);
    if(n==1) printf("The given number is not prime");
    else {
    if(prime != 1) printf("The given number is prime.");
    else printf("The given number is not prime.");
    }
}