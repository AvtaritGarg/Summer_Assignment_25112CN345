// Write a program to Character frequency. 

#include <stdio.h>

int main(){
    int n,i,freq = 0;
    char key,a[100];

    printf("Enter a word or a sentence: ");
    fgets(a, sizeof(a), stdin);

    for(n=0;n<100;n++){
        if(a[n]=='\n'){
            a[n] = '\0';
            break;
        }
    }

    printf("Enter an element to check its frequency: ");
    scanf("%c", &key);

    for(i=0;i<n;i++){
        if(a[i] == key ) freq++;
    }

    printf("The frequency of the given character is: %d", freq);
}