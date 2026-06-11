//Write a program to Find sum and average of array.

#include <stdio.h>

int main(){
    int i,n,a[50],sum=0;
    float avg;

    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++){
        sum = sum + a[i];
    }

    avg = (float) sum / n;
    printf("The sum of the given array is: %d\n", sum);
    printf("The avg of the given array is: %.2f", avg);

}