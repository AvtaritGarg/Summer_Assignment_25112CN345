// Write a program to Check Armstrong number. 

#include <stdio.h>
#include <math.h>

int main(){
    int i,n,arm=0,power=0;

    printf("Enter a number to check if its armstrong number or not: ");
    scanf("%d", &n);

    for(i=n;i>0;i=i/10){
        power++;
    }
    for(i=n;i>0;i=i/10){
        arm = arm + pow(i%10, power);
    }
    if(arm == n) printf("The given number is an armstrong number.\n");
    else printf("The given number is not an armstrong number. \n");
}