// Write a program to Second largest element. 

#include <stdio.h>

int main(){
    int n,i,a[50],lar,sec;

    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    if(a[1]>a[0]){
        lar = a[1];
        sec = a[0];
    }
    else {
        sec = a[1];
        lar = a[0];
    }

    for(i=0;i<n;i++){
        if(a[i]>lar) lar = a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>sec && a[i]<lar) sec = a[i];
    }

    printf("The second largest element of the array is: %d", sec);
}