//Write a program to Print factors of a number. 

#include <stdio.h>

int main(){
    int i,n;

    printf("Enter a number to find its factors: ");
    scanf("%d", &n);

    printf("The factors of the given number are: 1");
    for(i=2;i<=n;i++){
        if(n%i==0) printf(", %d", i);
    }
    printf("\n");
}