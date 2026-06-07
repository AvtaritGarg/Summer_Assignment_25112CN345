//Write a program to Print reverse pyramid.
// *******
//  *****
//   ***
//    *

#include <stdio.h>

int main(){

    int i,j,n;

    printf("Enter the number of rows of the pattern: ");
    scanf("%d", &n);

    for(i=n;i>0;i--){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}