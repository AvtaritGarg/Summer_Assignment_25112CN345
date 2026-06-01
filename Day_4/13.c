// Write a program to Generate Fibonacci series

#include <stdio.h>

int main(){
    int i,n,last1 = 1, last2 = 0, next;

    printf("Enter number(natural numbers only) of terms of fibonacci series to be printed: ");
    scanf("%d", &n);

    if(n==1) printf("%d, ",last2 );
    if(n>=2) printf("%d, %d ",last2, last1);

    for(i=3; i<=n;i++){
        next = last1 + last2;
        printf(", %d", next);
        last2 = last1;
        last1 = next;
    }
    printf(".\n");
}