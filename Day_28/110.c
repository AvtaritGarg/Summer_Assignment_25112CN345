// Write a program to Create bank account system.

#include <stdio.h>
#include <string.h>

int main(){
    char name[50][100];
    int accNum[50], balance[50], n=2, button=0;

    strcpy(name[0], "Avtarit");
    accNum[0] = 20333;
    balance[0] = 50000;

    strcpy(name[1], "Yash");
    accNum[1] = 42301;
    balance[1] = 70000;

    while(button != 5){
        printf("Menu:\n To Display Accounts, Press 1\n To Add an Account, Press 2\n To Deposit, Press 3\n To Withdraw, Press 4\n To Exit, Press 5\n\n Enter: ");
        scanf("%d", &button);

        if(button == 1){
            printf("\n%-5s %-20s %-15s %s\n", "No.", "Name", "Acc. Number", "Balance");
            printf("-------------------------------------------------------\n");
            for(int i=0; i<n; i++){
                printf("%-5d %-20s %-15d %d\n", i+1, name[i], accNum[i], balance[i]);
            }
            printf("\n");
        }
        if(button == 2){
            printf("Enter the name: ");
            getchar();
            fgets(name[n], sizeof(name[n]), stdin);
            int len = strlen(name[n]);
            if(name[n][len-1] == '\n') name[n][len-1] = '\0';
            printf("Enter the account number: ");
            scanf("%d", &accNum[n]);
            printf("Enter the initial balance: ");
            scanf("%d", &balance[n]);
            n++;
            printf("Account added successfully!\n");
        }
        if(button == 3){
            int idx, amount;
            printf("Enter account number (1 to %d): ", n);
            scanf("%d", &idx);
            idx--;
            if(idx < 0 || idx >= n) printf("Invalid account!\n");
            else{
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);
                if(amount <= 0) printf("Invalid amount!\n");
                else{
                    balance[idx] += amount;
                    printf("New balance of %s: %d\n", name[idx], balance[idx]);
                }
            }
        }
        if(button == 4){
            int idx, amount;
            printf("Enter account number (1 to %d): ", n);
            scanf("%d", &idx);
            idx--;
            if(idx < 0 || idx >= n) printf("Invalid account!\n");
            else{
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
                if(amount <= 0) printf("Invalid amount!\n");
                else if(amount > balance[idx]) printf("Insufficient balance!\n");
                else{
                    balance[idx] -= amount;
                    printf("New balance of %s: %d\n", name[idx], balance[idx]);
                }
            }
        }
    }
}