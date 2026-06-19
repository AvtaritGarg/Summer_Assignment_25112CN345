// Write a program to Find first repeating character.

#include <stdio.h>

int main(){
    int i,j,n,freq;
    char a[100],res;

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    for(n=0;n<100;n++){
        if(a[n] == '\n'){
            a[n] = '\0';
            break;
        }
    }
    
    for(i=0;i<n;i++){
        freq = 1;
        for(j=i+1;j<n;j++){
            if(a[i] == a[j]){
                freq++;
                break;
            }
        }
        if(freq != 1) {
            printf("The first repeating character is: %c", a[i]);
            break;
        }
    }

}