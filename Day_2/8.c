#include <stdio.h>

int main(){
    int rev=0,num,digit,i;

    printf("Enter a number to check whether it is palindrome or not: ");
    scanf("%d", &num);

    for(i=num;i>0;i=i/10){
        digit = i%10;
        rev = rev*10 + digit;
    }
    if(num == rev){
        printf("The given number is a palindrome\n");
    } else printf("The given number is not a palindrome\n");
}