// Write a program to Merge arrays. 

#include <stdio.h>

int main(){
    int n,m,i,a[50],b[50],c[100];

    // Input first array
    printf("Enter the number of elements of first array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Input second array
    printf("Enter the number of elements of the second array: ");
    scanf("%d", &m);

    for(i=0;i<m;i++){
        printf("Enter the value of b[%d]: ",i);
        scanf("%d", &b[i]);
    }

    for(i=0;i<m+n;i++){
        if(i<n) c[i] = a[i];
        else c[i] = b[i-n];
    }

    // Print merged array
    printf("The merged array is: { ");
    for(i=0;i<m+n;i++){
        printf("%d", c[i]);
        if(i!=m+n-1) printf(", ");
    }
    printf(" }");
}