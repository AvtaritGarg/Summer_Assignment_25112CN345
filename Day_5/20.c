//Write a program to Find largest prime factor. 

#include <stdio.h>

int main(){
    int n,i,j,prime=0,largestPrime;

    printf("Enter a number to find its largest prime factor: ");
    scanf("%d", &n);

    for(i=2;i<=n;i++){
        prime = 0;
        if(n%i==0){ for(j=2;j<=i/2;j++){
            if(i%j==0) prime++;
        } if(prime==0) largestPrime = i;}
    }
    printf("Largest prime factor = %d\n", largestPrime);
}