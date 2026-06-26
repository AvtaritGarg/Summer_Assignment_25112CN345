// Write a program to Create student record management system.

#include <stdio.h>
#include<string.h>

int main(){
    int grade[50],n=3,button=0;
    char name[50][100];

    strcpy(name[0],"Avtarit");
    strcpy( name[1],"Dks");
    strcpy(name[2], "Yash");

    grade[0] = 100;
    grade[1] = 70;
    grade[2] = 80;


    while(button != 3){
        printf("Menu: \n To Display Students, Press 1\n To Add a New Student, Press2\n To Exit, Press 3\n\n Enter: ");
        scanf("%d", &button);

        if(button == 1){
            for(int i=0;i<n;i++){
                printf(" %s: %d \n", name[i], grade[i]);
            }
        }
        if(button == 2){
            printf("Enter the name of the student: ");
            scanf("%s", name[n]);
            getchar();
            printf("Enter the grades of the student: ");
            scanf("%d", &grade[n]);
            getchar();
            n++;
        }
    }
}