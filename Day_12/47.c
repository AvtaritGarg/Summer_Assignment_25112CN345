//Write a program to Write function for Fibonacci.

#include <stdio.h>

void fibonacci(int n){
    int last2 = 0, last1 = 1, next;

    if(n==1) printf("0");
    if(n>=2) printf("0 1");
    if(n>2)
        for(int i=2 ;i<n; i++){
            next = last2 + last1;
            printf(" %d", next);
            last2 = last1;
            last1 = next;
        }
    if(n<=0) return;
}

int main(){
    int n;

    printf("Enter the number of terms of fibonacci series: ");
    scanf("%d", &n);

    fibonacci(n);
    printf("\n");
}