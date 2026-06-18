// Write a program to Remove spaces from string.

#include <stdio.h>

int main(){
    int i,n,k;
    char a[100];

    printf("Enter a string: ");
    fgets(a,sizeof(a), stdin);

    for(n=0;n<100;n++){
        if(a[n]=='\n'){
            a[n] = '\0';
            break;
        }
    }

    for(i=0;i<n;i++){
        if(a[i]==' '){
            for(k=i;k<n;k++){
                a[k] = a[k+1];
            }
            n--;
        }
    }


    printf("The string after removing space: (%s)",a);
}