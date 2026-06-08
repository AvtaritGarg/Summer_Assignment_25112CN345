//Write a program to Write function to find sum of two numbers.

#include <stdio.h>

int add(int a,int b){
    return a+b;
}

int main(){
    int a,b;

    printf("Enter the first number to be added: ");
    scanf("%d", &a);

    printf("Enter the second number to be added: ");
    scanf("%d", &b);

    printf("The sum of the given numbers is: %d", add(a,b));
}