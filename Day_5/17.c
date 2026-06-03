//Write a program to Check perfect number. 

#include <stdio.h>

int main(){
    int i,n,pf=0;

    printf("Enter a number to check whether its a perfect number: ");
    scanf("%d", &n);

    for(i=1;i<=n/2;i++){
        if(n%i==0) pf = pf + i;
    }
    if(pf==n) printf("The given number is a perfect number.\n");
    else printf("The given number is not a perfect number.\n");
}