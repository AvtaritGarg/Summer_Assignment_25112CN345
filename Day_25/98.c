// Write a program to Find common characters in strings.

#include <stdio.h>
#include <string.h>

int main(){
    int n1,n2,i,j,k=0,l,count;
    char a[100], b[100], c[100];

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    n1 = strlen(a);
    if(a[n1-1] == '\n'){
        a[n1-1] = '\0';
        n1--;
    }

    printf("Enter a string: ");
    fgets(b, sizeof(b), stdin);
    n2 = strlen(b);
    if(b[n2-1] == '\n'){
        b[n2-1] = '\0';
        n2--;
    }


    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(a[i] == b[j]){
                count = 0;
                for(l=0;l<k;l++){
                    if(a[i] == c[l]){
                        count++;
                        break;
                    }
                }
                if(count == 0)
                c[k++] = b[j];
            } 
        }
    }
    c[k] = '\0';

    printf("The common characters are: %s\n", c);

}