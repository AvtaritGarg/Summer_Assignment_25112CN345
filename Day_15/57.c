// Write a program to Reverse array. 

#include <stdio.h>

int main(){
    int i,n,a[50],b[50];

    printf("Enter the numer of elements of the array: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter the value of a[%d]: ",i);
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++){
        b[i] = a[n-i-1];
    }
    printf("The reversed array is: { ");
    for(i=0;i<n;i++){
        printf("%d", b[i]);
        if(i!=n-1) printf(", ");
    }

    printf(" }\n");
}