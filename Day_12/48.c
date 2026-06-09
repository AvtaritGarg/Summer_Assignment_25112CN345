//Write a program to Write function for perfect number. 

#include <stdio.h>

int perfect(int n){
    int i,sum=0;

    for(i=1;i<n;i++){
        if(n%i==0) sum = sum + i;
    }
    return sum == n;
}

int main(){
    int n;

    printf("Enter a number to check if its perfect number: ");
    scanf("%d", &n);


    if(perfect(n))
        printf("The given number is a perfect number.");
    else 
        printf("The given number is not a perfect number.");
}