//Write a program to Find missing number in array.

#include <stdio.h>

int main(){
    int n,i,a[50],missingNumber,expectedSum=0,sum=0;

    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the value of a[%d]: ", i);
        scanf("%d",&a[i]);
    }
    expectedSum = n+1;
    for(i=1;i<=n;i++){
        expectedSum = expectedSum + i;
        sum = sum + a[i-1];
    }
    missingNumber = expectedSum - sum;

    printf("The missing number is %d\n", missingNumber);
}