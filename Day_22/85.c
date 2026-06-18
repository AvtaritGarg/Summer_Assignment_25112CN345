// Write a program to Check palindrome string. 

#include <stdio.h>

int main(){
    int i,n,isPalindrome = 1;
    char a[100];

    printf("Enter a string to check whether its a palindrome string: ");
    scanf("%s", a);

    for(n=0;n<100;n++){
        if(a[n] == '\0') break;
    }

    for(i=0;i<n/2;i++){
        if(a[i] != a[n-1-i]) isPalindrome = 0;
    }

    if(isPalindrome) printf("The given string is a palindrome string.");
    else printf("The given string is not a palindrome string.");
    
}