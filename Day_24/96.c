// Write a program to Remove duplicate characters.

#include <stdio.h>
#include <string.h>

int main(){
    int n,i,j,k=0,count;
    char a[100],res[100];

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    n= strlen(a);
    if(a[n-1]=='\n'){
        a[n-1] = '\0';
        n--;
    }


    for(i=0;i<n;i++){
        count = 1;
        for(j=0;j<k;j++){
            if(a[i] == res[j]){
                count++;
            }
        }
        if(count == 1){
            res[k++] = a[i];
        }
    }
    res[k]= '\0';


    printf("String after removing duplicates is : %s\n", res);
}