//Write a program to Write function for palindrome.

#include <stdio.h>

int pal(int n){
    int i, res= 0;

    for(i=n;i>0;i=i/10){
        res = res * 10 + i % 10;
    }
    return n==res;
}

int main(){
    int n,res;

    printf("Enter a number to check if its palindrome or not: ");
    scanf("%d", &n);

    res = pal(n);

    if(res == 1)
        printf("The given number is a palindrome.");
    else 
        printf("The given number is not a palindrome.");

}