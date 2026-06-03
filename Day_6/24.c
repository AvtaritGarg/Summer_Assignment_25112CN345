//Write a program to Find x^n without pow(). 

#include <stdio.h>

int main(){
    int x,i,n,res=1;

    printf("Enter the value of base(x): ");
    scanf("%d", &x);
    printf("Enter the value of power(n): ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        res = res*x;
    }
    printf("The value of x^n = %d", res);
}
