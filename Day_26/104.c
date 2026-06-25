// Write a program to Create quiz application.

#include <stdio.h>

int main(){
    int isCorrect,score = 0;
    char a;

    printf("WELCOME TO THE QUIZ!!!\nPress Enter to Play.");
    getchar();

    printf("What is the capital of France?\n a) London\n b) Paris\n c) Berlin\n d) Rome\n\n Enter Your Answer: ");
    scanf("%c", &a);
    getchar();
    if(a == 'b' || a == 'B' || a == '2'){
        score++;
        printf("Correct answer ✅");
    } else printf("Wrong answer💔🥀\n");
    printf("Press Enter to continue ");
    getchar();

    printf("How many legs does a spider have?\n a) 4\n b) 6\n c) 8\n d) 10\n\n Enter Your Answer: ");
    scanf("%c", &a);
    getchar();
    if(a == 'c' || a == 'C' || a == '3'){
        score++;
        printf("Correct answer ✅");
    } else printf("Wrong answer💔🥀\n");
    printf("Press Enter to continue ");
    getchar();

    printf("What color is the moon?\n a) White\n b) Yellow\n c) Grey\n d) Blue\n\n Enter Your Answer: ");
    scanf("%c", &a);
    getchar();
    if(a == '3' || a == 'C' || a == 'c'){
        score++;
        printf("Correct answer ✅");
    } else printf("Wrong answer💔🥀\n");
    printf("Press Enter to continue ");
    getchar();

    printf("How many continents are there?\n a) 5\n b) 6\n c) 7\n d) 8\n\n Enter Your Answer: ");
    scanf("%c", &a);
    getchar();
    if(a == 'c' || a == 'C' || a == '3'){
        score++;
        printf("Correct answer ✅");
    } else printf("Wrong answer💔🥀\n");
    printf("Press Enter to continue ");
    getchar();

    printf("What is 7 x 8?\n a) 54\n b) 56\n c) 58\n d) 60\n\n Enter Your Answer: ");
    scanf("%c", &a);
    getchar();
    if(a == 'b' || a == 'B' || a == '2'){
        score++;
        printf("Correct answer ✅");
    } else printf("Wrong answer💔🥀\n");
    printf("Press Enter to continue ");
    getchar();


    printf("Your Final Score is: %d/5", score);
}