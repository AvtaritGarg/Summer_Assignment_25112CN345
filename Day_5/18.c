//Write a program to Check strong number. 

#include <stdio.h>

int main(){
    int n,i,j,sum=0,f=0;

    printf("Enter a number to check whether its a strong number: ");
    scanf("%d", &n);

    for(i=n;i>0;i=i/10){
        f=1;
        for(j=i%10;j>0;j--){
            f = f*j;
        }
        sum = sum + f;
    }
    if(n==sum) printf("The given number is a strong number.\n");
    else printf("The given number is not a strong number.\n");
}