//Write a program to Check symmetric matrix. 

#include <stdio.h>

int main(){
    int n,a[50][50],i,j,isSymmetric = 1;

    printf("Enter the number of rows and columns of the square matrix: ");
    scanf("%d",&n);


    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter the value of a[%d][%d]: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j>i){
                if(a[i][j] != a[j][i]){
                    isSymmetric = 0;
                    break;
                }
            }
        }
        if(!isSymmetric) break;
    }
    

    if(isSymmetric) printf("The given matrix is symmetric.");
    else printf("The given matrix is not symmetric.");
}