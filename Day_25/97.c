// Write a program to Merge two sorted arrays. 

#include <stdio.h>

int main(){
    int n1,n2,i,j=0,k=0,a[50],b[50],c[100];

    printf("Enter the number of elements of sorted array 1: ");
    scanf("%d", &n1);

    for(i=0;i<n1;i++){
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }


    printf("Enter the number of elements of sorted array 2: ");
    scanf("%d", &n2);

    for(i=0;i<n2;i++){
        printf("Enter the value of b[%d]: ", i);
        scanf("%d", &b[i]);
    }  


    for(i=0;i<n1+n2;i++){
        if(j<n1){
            if(k<n2){
                if(a[j] <= b[k]) c[i] = a[j++];
                else c[i] = b[k++];
            } else c[i] = a[j++];
        } else c[i] = b[k++];
    }
    printf("Merged array: ");
    for(i=0;i<n1+n2;i++){
        printf("%d", c[i]);
        if(i!= n1+n2-1){
            printf(", ");
        }
    }
    printf("\n");
}