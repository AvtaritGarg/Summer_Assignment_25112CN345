// Write a program to Check anagram strings. 

#include <stdio.h>

int main(){
    int i,j,k,n1,n2,freq,anagram=0,match;
    char a1[100],a2[100];

    printf("Enter a string: ");
    fgets(a1, sizeof(a1), stdin);

    for(n1=0;n1<100;n1++){
        if(a1[n1] == '\n'){
            a1[n1] = '\0';
            break;
        }
    }

    printf("Enter a string: ");
    fgets(a2, sizeof(a2), stdin);

    for(n2=0;n2<100;n2++){
        if(a2[n2] == '\n'){
            a2[n2] = '\0';
            break;
        }
    }

    if(n1==n2){
        anagram = 1;
        for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                match = 0;
                if(a1[i] == a2[j]){
                    for(k=j;k<n2-1;k++){
                        a2[k] = a2[k+1];
                    }
                    n2--;
                    match = 1;
                    break;
                }
            }
            if(match == 0) anagram = 0;
        }
    }
    if(anagram) printf("The given strings are anagram.");
    else printf("The given strings are not anagram.");

}