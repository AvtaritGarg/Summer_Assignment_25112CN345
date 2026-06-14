// Write a program to Find common elements of arrays. 

#include <stdio.h>

int main(){
    int n,m,i,j,k,a[50],b[50],c[100],common=0,alreadyExists=0;

    // Input first array
    printf("Enter the number of elements of first array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Input second array
    printf("Enter the number of elements of the second array: ");
    scanf("%d", &m);

    for(i=0;i<m;i++){
        printf("Enter the value of b[%d]: ",i);
        scanf("%d", &b[i]);
    }


    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i] == b[j]){
                    c[common++] = b[j];
                    b[j] = -9999999;
                    break;
            }
        }
    }

    if(common==0) printf("No common elements.\n");
    else{
        printf("The Common elements of the arrays are: { ");
        for(i=0;i<common;i++){
            printf("%d", c[i]);
            if(i!=common-1) printf(", ");
        }
        printf(" }\n");
    } 


}