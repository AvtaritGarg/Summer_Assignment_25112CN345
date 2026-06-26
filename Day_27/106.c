// Write a program to Create employee management system.

#include <stdio.h>
#include<string.h>

int main(){
    int salary[50],id[50],n=3,button=0;
    char name[50][100];

    strcpy(name[0],"Avtarit");
    strcpy( name[1],"Dks");
    strcpy(name[2], "Yash");

    salary[0] = 100000;
    salary[1] = 70000;
    salary[2] = 80000;

    id[0] = 20333;
    id[1] = 42301;
    id[2] = 34395;


    while(button != 3){
        printf("Menu: \n To Display Employees, Press 1\n To Add a New Employee, Press2\n To Exit, Press 3\n\n Enter: ");
        scanf("%d", &button);

        if(button == 1){
            for(int i=0;i<n;i++){
                printf(" %s: %d \n", name[i], salary[i]);
            }
        }
        if(button == 2){
            printf("Enter the Id to be assigned: ");
            scanf("%d", &id[n]);
            printf("Enter the name of the employee: ");
            scanf("%s", name[n]);
            getchar();
            printf("Enter the grades of the employee: ");
            scanf("%d", &salary[n]);
            getchar();
            n++;
        }
    }
}