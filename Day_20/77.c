// Write a program to Multiply matrices.

#include <stdio.h>

int main(){
    int n,m,p,a[50][50],b[50][50],c[50][50],i,j,k;

    printf("Enter the number of rows of the matrix 1 : ");
    scanf("%d",&n);

    printf("Enter the number of columns of the matrix 1: ");
    scanf("%d", &m);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Enter the value of a[%d][%d]: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The number of rows of matrix 2 is same as colums of matrix 1.\n");
    printf("Enter the number of columns of matrix 2: ");
    scanf("%d", &p);


    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            printf("Enter the value of b[%d][%d]: ", i,j);
            scanf("%d", &b[i][j]);
        }
    }


    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            c[i][j] = 0;
            for(k=0;k<m;k++){
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("The multiplication of the matrices is: \n");

    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
}