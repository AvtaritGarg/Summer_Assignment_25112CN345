// Write a program to Convert lowercase to uppercase.

#include <stdio.h>

int main(){
    int i,n;
    char a[50];

    printf("Enter a string: ");
    scanf("%s", a);

    for(n=0;n<50;n++){
        if(a[n]=='\0') break;
    }

    for(i=0;i<n;i++){
        if(a[i] >= 'a' && a[i] <= 'z') a[i] = a[i] - 32;
    }

    printf("The string after converting lowercase to uppercase: %s" ,a);
}