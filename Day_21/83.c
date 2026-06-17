// Write a program to Count vowels and consonants.

#include <stdio.h>

int main(){
    int i,n,vowels=0,consonants=0;

    char a[50];

    printf("Enter a string to count consonants and vowels: ");
    scanf("%s", a);

    for(n=0;n<50;n++){
        if(a[n] == '\0') break;
    }

    for(i=0;i<n;i++){
        if(a[i] == 65 || a[i] == 69 || a[i] == 73 || a[i] == 79 || a[i] == 85 || a[i] == 97 || a[i] == 101 || a[i] == 105 || a[i] == 111 || a[i] == 117) vowels++;
        else if((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) {
            consonants++;
        }
    }

    printf("The given string has %d vowels and %d consonants.", vowels,consonants);
}