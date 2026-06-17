// Write a program to Reverse a string. 

#include <stdio.h>

int main(){
    int i,n,temp;
    char str[50];

    printf("Enter a string to reverse it: ");
    scanf("%s", str);

    for(n=0;n<50;n++){
        if(str[n]=='\0') break;
    }
    

    for(i=0;i<n/2;i++){
        temp = str[i];
        str[i] = str[n-1-i];
        str[n-1-i] = temp;
    }

    printf("The reverse of the string is: %s", str);

}