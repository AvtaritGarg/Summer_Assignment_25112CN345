// Write a program to Rotate array left. 

#include <stdio.h>

int main(){
    int i,n,a[50],b[50];

    printf("Enter the numer of elements of the array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter the value of a[%d]: ",i);
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++){
        if(i==0) b[n-1] = a[0];
        else b[i-1] = a[i];
    }
    printf("Rotated array: { ");
    for(i=0;i<n;i++){
        printf("%d", b[i]);
        if(i!=n-1) printf(", ");
    }
    printf(" }\n");
}