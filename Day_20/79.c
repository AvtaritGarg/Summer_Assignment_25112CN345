//Write a program to Find row-wise sum. 

#include <stdio.h>

int main(){
    int n,m,a[50][50],i,j,sum=0;

    printf("Enter the number of rows of the matrix: ");
    scanf("%d",&n);

    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &m);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Enter the value of a[%d][%d]: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0;i<n;i++){
        sum = 0;
        for(j=0;j<m;j++){
            sum = sum + a[i][j];
        }

        printf("The sum of row %d is: %d\n", i,sum);
    }
    
}