#include <stdio.h> 

int main() {
    int num,product=1,i,digit;

    printf("Enter a number to find product of its digits: ");
    scanf("%d", &num);

    for(i=num; i>0; i=i/10){
        digit = i % 10;
        product = product * digit;
    }
    printf("Product of the entered number is: %d\n", product);
}