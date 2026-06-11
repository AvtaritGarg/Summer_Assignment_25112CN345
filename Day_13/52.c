//Write a program to Count even and odd elements.

#include <stdio.h>

int main(){
    int even=0,odd=0,n,i,a[50];

    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i]%2 == 0) 
            even++;
        else 
            odd++;
    }
    printf("The number of odd elements are: %d\nThe number of even elements are: %d", odd,even);
}