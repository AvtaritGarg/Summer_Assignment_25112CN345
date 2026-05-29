#include <stdio.h>

int main(){
    int rev=0,num,i,digit;

    printf("Enter a number to find sum of its digits: ");
    scanf("%d", &num);

    for(i=num; i>0; i=i/10){
        digit = i % 10;
        rev = rev * 10 + digit;
    }

    printf("The reverse of the entered number is: %d\n" ,rev);
    
}