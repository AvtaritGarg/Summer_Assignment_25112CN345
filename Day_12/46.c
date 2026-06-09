//Write a program to Write function for Armstrong.

#include <stdio.h>
#include <math.h>

int arm(int n){
    int i,digits=0,res=0;

    for(i=n;i>0;i=i/10) digits++;
    for(i=n;i>0;i=i/10){
        res = res + pow(i%10, digits);
    }

    return res==n;
}

int main(){
    int n;

    printf("Enter a number to check whether it is armstrong number or not: ");
    scanf("%d", &n);

    if(arm(n)) printf("The entered number is an armstrong number.\n");
    else printf("The entered number is not an armstrong number.\n");

}