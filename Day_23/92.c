// Write a program to Find maximum occurring character.

#include <stdio.h>

int main(){
    int i,j,n,freq,highestFreq=0,maxIndex=-1;
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
        if(a[i]!=' '){
            freq = 1;
            for(j=i+1;j<n;j++){
                if(a[i] == a[j]){
                    freq++;
                }
            }
            if(freq>highestFreq){
                highestFreq = freq;
                maxIndex = i;
            } 
        }
    }


    printf("The element with highest frequency is %c", a[maxIndex]);
}