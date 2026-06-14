// Write a program to Sort array in descending order.

#include <stdio.h>

int main(){
    int n,i,j,temp,a[50];

    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the value of a[%d]: ",i);
        scanf("%d", &a[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]<a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Sorted Array: { ");
    for(i=0;i<n;i++){
        printf("%d", a[i]);
        if(i!=n-1) printf(", ");
    }
    printf(" }");

}