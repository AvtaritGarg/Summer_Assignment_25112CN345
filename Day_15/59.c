// Write a program to Rotate array right. 

#include <stdio.h>

int main(){
    int i,n,a[50],b[50],temp;

    printf("Enter the numer of elements of the array: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter the value of a[%d]: ",i);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n-1;i++){
        b[i+1] = a[i];
    }
    b[0] = a[n-1];

    printf("Rotated array: { ");
    for(i=0;i<n;i++){
        printf("%d", b[i]);
        if(i!=n-1) printf(", ");
    }
    printf(" }");

}