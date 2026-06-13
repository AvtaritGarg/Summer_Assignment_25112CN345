//Write a program to Find maximum frequency element.

#include <stdio.h>

int main(){
    int n,i,j,a[50],freq=1,highestFreq=1,highestFreqElement;

    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the value of a[%d]: ", i);
        scanf("%d",&a[i]);
    }
    
    highestFreqElement = a[0];

    for(i=0;i<n;i++){
        freq = 1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]) freq++;
        }
        if(freq>highestFreq){
            highestFreq = freq;
            highestFreqElement = a[i];
        }
    }

    printf("The element with highest freq is %d and its frequency is %d\n",highestFreqElement, highestFreq );
}
