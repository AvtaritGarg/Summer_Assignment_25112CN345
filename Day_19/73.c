// Write a program to Add matrices. 

#include <stdio.h>

int main(){
    int n,m,i,j,a[50][50],b[50][50],c[50][50];


    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &n);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &m);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Enter the value of a[%d][%d]: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }


    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Enter the value of b[%d][%d]: ", i,j);
            scanf("%d", &b[i][j]);
        }
    }
    

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("The sum of the matrices: \n");

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf(" %4d ", c[i][j]);
        }
        printf("\n");
    }
       
}