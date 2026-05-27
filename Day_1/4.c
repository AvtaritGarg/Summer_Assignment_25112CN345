#include <stdio.h>

int main(){
    int i,n,digits=0;

    printf("Enter a number to find number of digits in it: ");
    scanf("%d", &n);

    for(i=n;i>0;i=i/10){
        digits++;
    }
    printf("Number of digits = %d\n", digits);
}