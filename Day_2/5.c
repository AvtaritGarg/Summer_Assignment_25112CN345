#include <stdio.h>

int main(){
    int num,sum=0,i;

    printf("Enter a number to find the sum of its digits: ");
    scanf("%d", &num);

    for (i = num; i > 0; i = i/10){
        sum = sum + i%10;
    }
    printf("Sum of the digits of the entered number is: %d \n", sum);
}