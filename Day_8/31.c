//Write a program to Print character triangle.

#include <stdio.h>

int main(){
    int i,j,n;

    printf("Enter the number of rows of the pattern: ");
    scanf("%d", &n);


    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%c", 65+j);
        }
        printf("\n");
    }
}