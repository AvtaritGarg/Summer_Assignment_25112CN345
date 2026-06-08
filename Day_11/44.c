//Write a program to Write function to find factorial.

#include <stdio.h>

int fact(int n){
    int i, fact=1;
    for(i=n;i>0;i--) fact = fact * i;

    return fact;
}

int main(){
    int n;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);

    printf("The factorial of the given number is: %d\n", fact(n));
}