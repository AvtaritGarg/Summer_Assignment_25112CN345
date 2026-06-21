// Write a program to Find longest word. 

#include <stdio.h>
#include <string.h>

int main(){
    int n,i,j,k,wordLength,result=0;
    char a[100],b[100];

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    n = strlen(a);
    if(a[n-1]=='\n'){
        a[n-1] = '\0';
        n--;
    }

    for(i=0;i<n;i++){
        wordLength = 0;
        for(j=0; j<n; j++){
            if(a[i+j] == ' ' || a[i+j] == '\0'){
                break;
            } else {
                wordLength++;
            }
        }

        if(wordLength > result){
            result = wordLength;
            for(k=0;k<j;k++){
                b[k] = a[i+k];
            }
        }
        i=i+wordLength;
    }
    b[k] = '\0';

    printf("The longest word is %s with length = %d\n" , b, result);

}