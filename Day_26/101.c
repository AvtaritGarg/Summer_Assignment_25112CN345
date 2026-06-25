// Write a program to Create number guessing game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int x = rand() % 100;

    int a = -1;

    for(int i=0;a != x; i++){
        printf("Enter your guess: ");
        scanf("%d",&a);
        if(a > x) printf("The guessed number is too large.\n");
        else if(a < x) printf("The guessed number is too small.\n");
        else if(a == x) printf("Congratulations! You guessed it!!!🚀\n");
    }
}