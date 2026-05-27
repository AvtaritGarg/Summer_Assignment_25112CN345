#include <stdio.h>

int main(){
    int N,i,sum=0;
    printf("TO FIND THE SUM OF ALL NATURAL NUMBERS TILL N \nEnter the value of N:");
    scanf("%d", &N);

    for(i=1;i<=N;i++){
        sum = sum + i;
    }

    printf("Sum of natural numbers till N = %d \n", sum);

    return 0;

}