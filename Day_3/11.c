//Write a program to Find GCD of two numbers.

#include <stdio.h>

int main(){
    int n1,n2,gcd,i;

    printf("Enter the larger number : ");
    scanf("%d", &n1);

    printf("Enter the smaller number: ");
    scanf("%d", &n2);

    for(i=1;i<=n2;i++){
        if((n1%i==0)&&(n2%i==0)) gcd = i;
    }
    printf("The GCD of the given numbers is: %d\n",gcd);
}