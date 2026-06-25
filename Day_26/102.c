// Write a program to Create voting eligibility system

#include <stdio.h>

int main(){
    int a;
    printf("Enter your age: ");
    scanf("%d", &a);

    if(a>=18) printf("You are eligible to vote!!🚀");
    else printf("You are not eligible to vote, you need to wait %d years.", 18-a);
}