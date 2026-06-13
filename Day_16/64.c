//Write a program to Remove duplicates from array.

#include <stdio.h>

int main(){
    int n,i,j,k,a[50];

    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the value of a[%d]: ", i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(k=j;k<n-1;k++){
                    a[k] = a[k+1];
                }
                n--;
                j--;
            }
        }
    }

    printf("The array after removing duplicates is: { ");
    for(i=0;i<n;i++){
        printf("%d", a[i]);
        if(i!=n-1) printf(", ");
    }
    printf(" }");
}