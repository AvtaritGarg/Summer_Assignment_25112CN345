// Write a program to Create ATM simulation. 

#include <stdio.h>

int main(){
    int balance = 1000;
    int button=0,amount;

    printf("                    WELCOME TO THE ATM!!!\n");
    for(int i = 0; button != 4; i++){
        printf("    Menu: \n\n    -> To Check Balance, Press 1\n    -> To Deposit Money, Press 2\n    -> To Withdraw Money, Press 3\n    -> To Exit, Press 4\n");
        scanf("%d", &button);

        if(button == 1) printf("Balance: %d", balance);
        else if(button == 2){
            printf("Enter the amount to deposit: ");
            scanf("%d", &amount);
            if(amount > 0){
                balance = balance + amount;
                printf("Withdraw successful, Your new balance: %d", balance);
            } else printf("Enter realistic amount!!");
        }
        else if(button == 3){
            printf("Enter the amount to withdraw: ");
            scanf("%d", &amount);
            if(amount <= balance && amount > 0){
                balance = balance - amount;
                printf("Withdraw successful, Your new balance: %d", balance);
            } else printf("Insufficient Balance!! Try Again!");
        }
        printf("\n");
    }

    printf("        THANK YOU FOR USING OUR SERVICE!!!☺️☺️\n\n\n");
}