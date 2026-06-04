//Write a program to Recursive factorial. 

#include <stdio.h>

int fact(int n){
    if(n<=1) return 1;
    return n*(fact(n-1));
}

int main(){
    int a,f;
    printf("Enter a number to find its factorial: ");
    scanf("%d",&a);

    f = fact(a);
    printf("The factorial of the given number is: %d\nx", f);
}