// Write a program to Transpose matrix. 

#include <stdio.h>

int main(){
    int n,m,i,j,a[50][50],b[50][50];


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

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            b[i][j] = a[j][i];
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }
       
}