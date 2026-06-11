//Write a program to Find largest and smallest element.

#include <stdio.h>

int main(){
    int lg,sm,n,a[50],i;

    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    lg = a[0];
    sm = a[0];
    for(i=0;i<n;i++){
        if(a[i]>lg) lg = a[i];
        if(a[i]<sm) sm = a[i];
    }

    printf("The largest element is: %d\nThe smallest element is: %d \n", lg,sm);
}