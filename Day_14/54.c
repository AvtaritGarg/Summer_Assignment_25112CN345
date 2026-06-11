// Write a program to Frequency of an element. 

#include <stdio.h>

int main(){
    int n,i,a[50],key,freq=0;

    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the element to check its frequency in the array: ");
    scanf("%d", &key);

    for(i=0;i<n;i++){
        if(a[i]==key) freq++;
    }

    if(freq == 0) printf("Element not found.\n");
    else printf("Frequency of the element is: %d\n", freq);
}