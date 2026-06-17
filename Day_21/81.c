//Write a program to Find string length without strlen()

#include <stdio.h>

int main(){
    int i;
    char str[50];

    printf("Enter a string: ");
    scanf("%s", str);

    for(i=0;i<50;i++){
        if(str[i]=='\0') break;
    }

    printf("The length of the string is: %d\n", i);
}