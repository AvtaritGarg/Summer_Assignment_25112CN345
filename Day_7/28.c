//Write a program to Recursive reverse number. 

#include <stdio.h>

int rev(int n, int res){
    if(n==0) return res;
    else {
    res = res * 10 + n % 10;
    return rev(n / 10, res);
    }
}

int main(){
    int n;

    printf("Enter a number to find its reverse: ");
    scanf("%d", &n);

    printf("The reverse of the given number is: %d\n" ,rev(n,0));
    
}