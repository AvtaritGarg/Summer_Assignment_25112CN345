// Write a program to Selection sort. 

#include <stdio.h>

int main(){
    int n,i,j,a[50],smallest,temp;

    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the value of a[%d]: ",i);
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++){
        smallest = i;
        for(j=i;j<n;j++){
            if(a[j] < a[smallest]) smallest = j;
        }
        temp = a[smallest];
        a[smallest] = a[i];
        a[i] = temp;
    }

    printf("Sorted Array: { ");
    for(i=0;i<n;i++){
        printf("%d", a[i]);
        if(i!=n-1) printf(", ");
    }
    printf(" }");
}