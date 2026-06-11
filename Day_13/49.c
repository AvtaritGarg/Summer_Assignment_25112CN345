//Write a program to Input and display array.

#include <stdio.h>

int main(){
    int i,n,A[50];

    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Enter the value of A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("The given array is: { ");

    for(i=0;i<n;i++){   
        printf("%d", A[i]);
        if(i!=n-1) printf(", ");
    }
    printf(" }\n");
}