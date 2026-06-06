//Write a program to Print reverse star pattern.

#include <stdio.h>

int main(){
    int n,i,j;

    printf("Enter the number of rows of the pattern: ");
    scanf("%d", &n);

    for(i=n;i>0;i--){
        for(j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}