// Write a program to Find diagonal sum. 

#include <stdio.h>

int main(){
    int n,i,j,sum=0,a[50][50];


    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &n);


    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter the value of a[%d][%d]: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }


    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j || i+j == n-1) sum = sum + a[i][j];
        }
    }

    printf("The sum of diagonals of the matrix: %d\n ", sum);
       
}