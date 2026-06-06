//Write a program to Print hollow square pattern.

#include <stdio.h>

int main(){
    int n,i,j;

    printf("Enter the value of the side of the square: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        if(i==1||i==n){
            for(j=1;j<=n;j++){
                printf("*");
            }
        } else {
            printf("*");
            for(j=2;j<n;j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}