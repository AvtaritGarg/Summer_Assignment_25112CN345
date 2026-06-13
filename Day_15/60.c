// Write a program to Move zeroes to end. 

#include <stdio.h>

int main(){
    int l,n,i,a[50],b[50],x;

    printf("Enter the numer of elements of the array: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter the value of a[%d]: ",i);
        scanf("%d", &a[i]);
    }
    l=n-1;
    x=0;
    for(i=0;i<n;i++){
        if(a[i]==0) {
            b[l] = a[i];
            l--;
            x++;
        } else b[i-x] = a[i];
    }   


    printf("The array after moving zeroes of the array to the end is: { ");
    for(i=0;i<n;i++){
        printf("%d", b[i]);
        if(i!=n-1) printf(", ");
    }
    printf(" }\n");
    
}