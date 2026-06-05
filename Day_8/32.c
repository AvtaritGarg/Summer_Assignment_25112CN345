//Write a program to Print repeated-number pattern.

#include <stdio.h>

int main(){
    int i,j,n;

    printf("Enter number of rows for the pattern: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            printf("%d", i);
        }
        printf("\n");
    }
}