// Write a program to Create marksheet generation system.

#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    int marks[5], total=0;
    float percentage;
    char subjects[5][20] = {"Math", "Science", "English", "History", "Computer"};

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);
    int len = strlen(name);
    if(name[len-1] == '\n') name[len-1] = '\0';

    for(int i=0; i<5; i++){
        printf("Enter marks for %s (out of 100): ", subjects[i]);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5.0;

    char grade[3];
    if(percentage >= 90) strcpy(grade, "A+");
    else if(percentage >= 80) strcpy(grade, "A");
    else if(percentage >= 70) strcpy(grade, "B");
    else if(percentage >= 60) strcpy(grade, "C");
    else if(percentage >= 50) strcpy(grade, "D");
    else strcpy(grade, "F");

    printf("\n========== MARKSHEET ==========\n");
    printf("Student Name: %s\n", name);
    printf("================================\n");
    for(int i=0; i<5; i++){
        printf("%-10s: %d/100\n", subjects[i], marks[i]);
    }
    printf("================================\n");
    printf("Total      : %d/500\n", total);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Grade      : %s\n", grade);
    printf("================================\n");
}