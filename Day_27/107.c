// Write a program to Create salary management system.

#include <stdio.h>
#include <string.h>

int main(){
    int salary[50], n=3, button=0;
    char name[50][100];

    strcpy(name[0], "Avtarit");
    strcpy(name[1], "Dks");
    strcpy(name[2], "Yash");

    salary[0] = 50000;
    salary[1] = 70000;
    salary[2] = 80000;

    while(button != 4){
        printf("Menu:\n To Display Employees, Press 1\n To Add a New Employee, Press 2\n To Give a Raise, Press 3\n To Exit, Press 4\n\n Enter: ");
        scanf("%d", &button);

        if(button == 1){
            for(int i=0; i<n; i++){
                printf(" %s: %d\n", name[i], salary[i]);
            }
        }
        if(button == 2){
            printf("Enter the name of the employee: ");
            scanf("%s", name[n]);
            getchar();
            printf("Enter the salary of the employee: ");
            scanf("%d", &salary[n]);
            getchar();
            n++;
        }
        if(button == 3){
            int idx;
            printf("Enter the employee number to give a raise (0 to %d): ", n-1);
            scanf("%d", &idx);
            int raise;
            printf("Enter the raise amount: ");
            scanf("%d", &raise);
            salary[idx] += raise;
            printf("New salary of %s: %d\n", name[idx], salary[idx]);
        }
    }
}