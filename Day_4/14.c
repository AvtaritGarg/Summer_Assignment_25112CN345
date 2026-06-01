// Write a program to Find nth Fibonacci term

#include <stdio.h>

int main(){
    int i,n,last1=1,last2=0,next;

    printf("To find the value of nth term of fibonacci series. Enter the value of n: ");
    scanf("%d", &n);

    if(n==1) next = 0;
    if(n==2) next = 1;

    for(i=3;i<=n;i++){
        next = last1 + last2;
        last2 = last1;
        last1 = next;
    }

    printf("The nth term of fibonacci series is: %d\n", next );
}