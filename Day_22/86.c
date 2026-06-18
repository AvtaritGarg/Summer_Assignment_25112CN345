// Write a program to Count words in a sentence.

#include <stdio.h>

int main(){
    int i, n, count = 1, blank = 0;
    char a[100];

    printf("Enter a sentence: ");
    fgets(a, sizeof(a), stdin);


    for(n=0;n<100;n++){
        if(a[n] == '\n'){
            a[n] = '\0';
            break;
        }
    }

    for(i=0;i<n;i++){
        if(a[i]==' ') blank++;
        else break;
    }
    
    for(i=blank;i<n;i++){
        if(a[i] == ' '){
            if(a[i+1] != ' ' && a[i+1] != '\0') count++;
        } 
    }

    printf("There are %d words in the input sentence.", count);
}