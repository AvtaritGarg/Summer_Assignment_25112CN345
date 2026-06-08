//Write a program to Write function to find maximum.

#include <stdio.h>

int max(int a, int b){
    if(a>=b)
        return a;
    else
        return b;
}

int main(){
    int a, b;

    printf("Enter 2 numbers to find the larger number.\n Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    if(a==b) printf("The entered numbers are equal\n");
    else printf("The larger number is: %d\n", max(a,b));
}