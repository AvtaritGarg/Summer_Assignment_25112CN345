//Write a program to Recursive Fibonacci. 

#include <stdio.h>

void fib(int a, int b, int n){
    if(n<=2) return;
    printf("  %d", a+b);
    fib(b,a+b,n-1);

}

int main(){
    int n;
    printf("Enter a number upto which fibonacci series is to be printed: ");
    scanf("%d", &n);
    if(n==1) printf("0");
    else if(n==2) printf("0  1");
    else {
        printf("0  1");
        fib(0,1,n);
    }
}