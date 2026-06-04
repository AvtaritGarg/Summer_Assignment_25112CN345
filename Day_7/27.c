//Write a program to Recursive sum of digits. 

#include <stdio.h>

int add(int n,int sum){
    if(n==0) return sum;
    else{
    sum = sum + n%10;
    return add(n/10,sum);}
}

int main(){
    int n,sum;
    printf("Enter a number to find sum of its digits: ");
    scanf("%d", &n);
    sum = add(n,0);
    printf("The sum of the digits of the given number is: %d\n", sum);
}